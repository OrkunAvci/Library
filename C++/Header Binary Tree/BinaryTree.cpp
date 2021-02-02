#include "BinaryTree.h"

//	Utility Functions:	(These are not declared in the Header)
template <class T>
void swap(T* a, T* b)	//	Customize and declare this in Header if needed.
{
	T* temp = *a;
	*a = *b;
	*b = *temp;
}

BinaryTreeNode* get_parent(BinaryTreeNode* curr)
{
	return curr->parent;
}

BinaryTreeNode* get_grandparent(BinaryTreeNode* curr)
{
	return get_parent(get_parent(curr));
}

BinaryTreeNode* get_sibling(BinaryTreeNode* curr)
{
	BinaryTreeNode* p = get_parent(curr);
	return (p->left != curr) ? p->left : p->right;
}

BinaryTreeNode* get_uncle(BinaryTreeNode* curr)
{
	return get_sibling(get_parent(curr));
}

BinaryTreeNode* max_of_left(BinaryTreeNode* curr)
{
	if (curr == nullptr)	{	return;		}
	//	Simple way:	(Based on sorted design)
	curr = curr->left;
	while (curr->right != nullptr)		{	cur = curr->right;		}
	return curr;
}

BinaryTreeNode* min_of_right(BinaryTreeNode* curr)
{
	if (curr == nullptr)	{	return;		}
	//	Simple way:	(Based on sorted design)
	curr = curr->right;
	while (curr->left != nullptr) { cur = curr->left; }
	return curr;
}

void update_link(BinaryTreeNode* curr, BinaryTreeNode* updated, unsigned int offset)		//	For offset--->, 0: Parent, 1: Left, 2: Right.
{
	if (curr == nullptr)	{	return;		}
	*(curr + (offset* sizeof(BinaryTreeNode*)) = updated;
}

void update_child(BinaryTreeNode* curr, BinaryTreeNode* target, BinaryTreeNode* updated)
{
	if		(curr == nullptr)		{	return;		}
	else if	(curr->left == target)	{	curr->left = updated;	}
	else if (curr->right == target) {	curr->right = updated;	}
	else
	{
		//	I am not touching anything.
		//	What are you doing?
		return;
	}
}
//	---------------END OF UTILITY-----------	//

//	Create/Delete:
BinaryTreeNode* bt_create_node(int input_data)
{
	BinaryTreeNode* curr = new BinaryTreeNode;
	curr->parent = curr->left = curr->right = nullptr;
	curr->data = input_data;
	return curr;
}

void bt_kill_node(BinaryTreeNode* curr)		//	This is run to deallocate nodes. To remove them from the tree go to bt_remove_node(BTN*, BTN*) .
{
	//	Deallocate data if it is custom:
	//	[-------------------------------]
	//	Dealloc self:
	delete curr;
}

void bt_remove_node(BinaryTreeNode* curr, bool control= true)	//	Customize the replacement. I used max_of_left().
{
	BinaryTreeNode* replacement = max_of_left(curr);
	if (curr == nullptr || replacement == nullptr)	{	return;		}
	//	For small & simple data:
	curr->data = replacement->data;
	update_child(replacement->parent, replacement, nullptr);
	if ( control )	{	bt_kill_node(replacement);	}	//	Reinsert doesn't kill. You don't need to use control.
}

void bt_clean_rest(BinaryTreeNode* curr)
{
	if (curr->left != nullptr)
	{
		bt_clean_rest(curr->left);
	}
	if (curr->right != nullptr)
	{
		bt_clean_rest(curr->right);
	}

	bt_remove_node(curr);
}

//	Manipulations:	(Last line checks if root has been moved and reassigns the root.)
void bt_shift_to_right(BinaryTreeNode* curr)	//	l<-(P)->r	=>	(L)->p->r
{
	BinaryTreeNode* left = curr->left;
	//	Parent:
	left->parent = curr->parent;
	update_child(curr->parent, curr, left);
	curr->parent = left;
	//	Child:
	curr->left = left->right;
	left->right = curr;
	if (get_grandparent(curr) == nullptr) { curr = get_parent(curr); }
}

void bt_shift_to_left(BinaryTreeNode* curr)	//	l<-(P)->r	=>	l<-p<-(R)
{
	BinaryTreeNode* right = curr->right;
	//	Parent:
	right->parent = curr->parent;
	update_child(curr->parent, curr, right);
	curr->parent = right;
	//	Child:
	curr->right = right->left;
	right->left = curr;
	if (get_grandparent(curr) == nullptr) { curr = get_parent(curr); }
}

void bt_swap_with_right(BinaryTreeNode* curr)	//	l<-(P)->r	=>	l<-(R)->p
{
	BinaryTreeNode* right = curr->right;
	//	Parent:
	right->parent = curr->parent;
	update_child(curr->parent, curr, right);
	curr->parent = right;
	//	Child:
	curr->right = right->right;
	right->right = curr;
	swap(curr->left, right->left);
	if (get_grandparent(curr) == nullptr) { curr = get_parent(curr); }
}

void bt_swap_with_left(BinaryTreeNode* curr)	// l<-(P)->r	=>	p<-(L)->r
{
	BinaryTreeNode* left = curr->left;
	//	Parent:
	left->parent = curr->parent;
	update_child(curr->parent, curr, left);
	curr->parent = left;
	//	Child:
	curr->left = left->left;
	left->left = curr;
	swap(curr->right, left->right);
	if (get_grandparent(curr) == nullptr)	{	curr = get_parent(curr);	}
}

//	Addition Functions:
void bt_insert(BinaryTreeNode* root, BinaryTreeNode* addon)
{
	if (root == nullptr)	{	root = addon;	}
	else if (addon->data <= root->data)
	{
		if (root->left == nullptr)
		{
			root->left = addon;
			update_link(addon, root, 0);
		}
		else
		{
			bt_insert(root->left, addon);
		}
	}
	else
	{
		if (root->right == nullptr)
		{
			root->right = addon;
			update_link(addon, root, 0);
		}
		else
		{
			bt_insert(root->right, addon);
		}
	}
}

//	Search Functions:
BinaryTreeNode* bt_search(BinaryTreeNode* curr, int searched)
{
	if		(curr ==nullptr )			{	return nullptr; }	//	No instance.
	else if	(curr->data == searched)	{	return curr;	}
	else if (curr->data < searched)		{	return bt_search(curr->left, searched);		}
	else  /*(curr->data > searched)*/	{	return bt_search(curr->right, searched);	}
}

//	Rebalance Functions:
unsigned int bt_num_of_nodes(BinaryTreeNode* curr)
{
	return (curr == nullptr)? 0: 1 + bt_num_of_nodes(curr->left) + bt_num_of_nodes(curr->right);
}

unsigned int bt_height(BinaryTreeNode* curr)
{
	if (curr == nullptr)
	{
		return 0;
	}
	unsigned int h_left= bt_height(curr->left);
	unsigned int h_right = bt_height(curr->right);
	return 1+ (h_left > h_right) ? h_left: h_right;
}

bool bt_balance(BinaryTreeNode* root)
{
	int diff = bt_height(root->left) - bt_height(root->right);
	if (2 < diff)
	{
		bt_shift_to_right(root);
		return bt_balance(root);
	}
	else if (diff < -2)
	{
		bt_shift_to_left(root);
		return bt_balance(root);
	}
	return true;
}
