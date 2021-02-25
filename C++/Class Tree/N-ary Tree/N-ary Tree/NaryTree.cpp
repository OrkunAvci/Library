#include "NaryTree.h"

template<class T>
void NaryTree<T>::clear(NODE* curr)
{
	if (curr == nullptr)
	{
		return;
	}

	clear(curr->nextSibling);
	clear(curr->firstChild);
	delete curr;
}

template<class T>
void* NaryTree<T>::search(T searched)
{
	if (root == nullptr)	{	return;		}
	NODE* curr = root;
	bool control = true;
	while (control)
	{
		while (curr->nextSibling != nullptr && curr->nextSibling->data < searched)
		{
			curr = curr->nextSibling;
		}

		if (curr->firstChild != nullptr && curr->firstChild < searched)
		{
			curr = curr->firstChild;
		}
		else
		{
			control = false;
		}
	}

	//	This is the pointer to the NODE !BEFORE! the searched element. Can be the parent or previous sibling. 
	return curr;
}

template<class T>
NaryTree<T>::NaryTree()
{
	root = nullptr;
}

template<class T>
NaryTree<T>::~NaryTree()
{
	clear(root);
}

template<class T>
void NaryTree<T>::insert(T data, bool isChild)
{
	NODE* created = new NODE;
	if (created == nullptr)		{	return;		}
	created->data = data;
	created->firstChild = created->nextSibling = nullptr;

	if (root == nullptr)
	{
		root = created;
		return;
	}

	NODE* searchRes = search(created->data);
	if (searchRes == nullptr)	{	return;		}
	if (isChild)
	{
		searchRes->firstChild = created;
	}
	else
	{
		created->nextSibling = searchRes->nextSibling;
		searchRes->nextSibling = created;
	}
}

template<class T>
void NaryTree<T>::remove(T searched)
{
	NODE* searchRes = search(T);
	NODE* temp;
	NODE* curr;
	if (searchRes != nullptr)
	{
		if (searchRes->nextSibling != nullptr && searchRes->nextSibling->data == searched)
		{
			temp = searchRes->nextSibling;
			searchRes->nextSibling = searchRes->nextSibling->nextSibling;

			//	Re-insert deleted node's children:
			if (temp->firstChild != nullptr)
			{
				curr = searchRes->firstChild;
				while (curr->nexSibling != nullptr)		{	curr=curr->nextSibling;		}
				curr->nextSibling = temp->firstChild;	//	Still sorted.
			}

			delete temp;
		}
		if (searchRes->firstChild != nullptr && searchRes->firstChild->data == searched)
		{
			temp = searchRes->firstChild;
			searchRes->firstChild = searchRes->firstChild->firstChild;

			//	Re-insert deleted node's siblings:
			if (temp->nextSibling != nullptr)
			{
				curr = searchRes->firstChild;
				while (curr->nexSibling != nullptr)		{	curr=curr->nextSibling;		}
				curr->nextSibling = temp->nextSibling;	//	Still sorted.
			}
		}
	}
}

template<class T>
bool NaryTree<T>::exists(T searched)
{
	NODE* searchRes = search(searched);
	if ( (searchRes->nextSibling != nullptr && searchRes->nextSibling->data == searched) || (searchRes->firstChild != nullptr && searchRes->firstChild->data == searched) )
	{
		return true;
	}
	return false;
}
