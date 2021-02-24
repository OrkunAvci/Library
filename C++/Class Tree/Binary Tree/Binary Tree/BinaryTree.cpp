#include "BinaryTree.h"

template<class T>
void BinaryTree<T>::updateLink(NODE* curr, NODE* target, NODE* updated)
{
	if		( curr == nullptr )			{	return;						}
	else if	( curr->parent == target )	{	curr->parent = updated;		}
	else if ( curr->left == target )	{	curr->left = updated;		}
	else if ( curr->right == target )	{	curr->right = updated;		}
	else
	{
		// Invalid target. Empty return. Customize with error logs.
		return;
	}
}

template<class T>
BinaryTree<T>::BinaryTree()
{
	root = nullptr;
}

template<class T>
BinaryTree<T>::~BinaryTree()
{
	clear(root);
}

template<class T>
void BinaryTree<T>::insert(T data)
{
	NODE* created = new NODE;
	created->data = data;
	created->left = created->right = nullptr;

	if (root == nullptr)
	{
		root = created;
		return;
	}

	NODE* curr = root;
	bool control = true;
	while (control)
	{
		if (created->data > curr->data)
		{
			if (curr->right == nullptr)
			{
				curr->right = created;
				created->parent = curr;
				control = false;
			}
			else
			{
				curr = curr->right;
			}
		}
		else /*(created->data <= curr->data)*/
		{
			if (curr->left == nullptr)
			{
				curr->left = created;
				created->parent = curr;
				control = false;
			}
			else
			{
				curr = curr->left;
			}
		}
	}
}

template<class T>
void BinaryTree<T>::insert(NODE* currRoot, NODE* addonTree)
{
	bool control = true;
	while (control)
	{
		if (addonTree->data > currRoot->data)
		{
			if (currRoot->right == nullptr)
			{
				currRoot->right = addonTree;
				addonTree->parent = currRoot;
				control = false;
			}
			else
			{
				currRoot = currRoot->right;
			}
		}
		else /*(addonTree->data <= currRoot->data)*/
		{
			if (currRoot->left == nullptr)
			{
				currRoot->left = addonTree;
				addonTree->parent = currRoot;
				control = false;
			}
			else
			{
				currRoot = currRoot->left;
			}
		}
	}
}

template<class T>
void BinaryTree<T>::remove(T searched)
{
	NODE* curr = root;
	while (curr != nullptr && curr->data != searched)
	{
		if (created->data > curr->data)
		{
			curr = curr->right;
		}
		else /*(created->data <= curr->data)*/
		{
			curr = curr->left;
		}
	}

	if (curr == nullptr)
	{
		return;
	}

	insert(curr->left, curr->right);
	updateLink(curr->left, curr, curr->parent);
	updateLink(curr->parent, curr, curr->left);

	delete curr;
}

template<class T>
void BinaryTree<T>::clear(NODE* curr)
{
	if ( curr == nullptr )	{	return;		}
	clear(curr->left);
	clear(curr->right);
	delete curr;
}

template<class T>
bool BinaryTree<T>::exists(T searched)
{
	NODE* curr = root;
	while (curr != nullptr && curr->data != searched)
	{
		if (created->data > curr->data)
		{
			curr = curr->right;
		}
		else /*(created->data <= curr->data)*/
		{
			curr = curr->left;
		}
	}

	return ( curr != nullptr );
}
