#pragma once
#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__

typedef struct BinaryTreeNode
{
	BinaryTreeNode* parent;
	BinaryTreeNode* left;
	BinaryTreeNode* right;
	int data;
};

//	Create/Delete:
BinaryTreeNode * bt_create_node(int);
void bt_kill_node(BinaryTreeNode*);
void bt_remove_node(BinaryTreeNode*, bool);
void bt_clean_rest(BinaryTreeNode*);

//	Manipulations:
void bt_shift_to_right(BinaryTreeNode*);
void bt_shift_to_left(BinaryTreeNode*);
void bt_swap_with_right(BinaryTreeNode*);
void bt_swap_with_left(BinaryTreeNode*);

//	Addition Functions:
void bt_insert(BinaryTreeNode*, BinaryTreeNode*);

//	Search Functions:
BinaryTreeNode * bt_search(BinaryTreeNode*, int);

//	Rebalance Functions:
unsigned int bt_num_of_nodes(BinaryTreeNode*);
unsigned int bt_height(BinaryTreeNode*);
bool bt_balance(BinaryTreeNode*)

#endif // !__BINARYTREE_H__
