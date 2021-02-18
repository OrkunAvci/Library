#include "DoubleLinkedList.h"

template<class T>
void DoubleLinkedList<T>::interConnect(NODE* left, NODE* right)
{
	if (left != nullptr)	{	left->right = right;	}
	if (right != nullptr)	{	right->left = left;		}
}

template<class T>
DoubleLinkedList<T>::DoubleLinkedList()
{
	head = tail = nullptr;
	circular = sorted = false;
}

template<class T>
DoubleLinkedList<T>::~DoubleLinkedList()
{
	resetAll();
}

template<class T>
void DoubleLinkedList<T>::resetAll()
{
	while ( remove(head->data) );
	tail = nullptr;
	circular = sorted = false;
}

template<class T>
void DoubleLinkedList<T>::add(T data)
{
	NODE* created = new NODE;
	if ( created == nullptr )	{	return;		}
	created->data = data;
	created->right = created->left = nullptr;

	if (tail != nullptr)
	{
		interConnect(created, tail->right);
		interConnect(tail, created);
	}
	else
	{
		head = created;
	}
	tail = created;
	sorted = false;
}

template<class T>
void DoubleLinkedList<T>::insert(T data)
{
	if (!sorted)
	{
		add(data);
		return;
	}

	NODE* created = createNode(T);
	if ( created == nullptr )	{	return;		}
	created->data = data;
	created->right = created->left = nullptr;

	NODE* curr = head;
	while (curr != tail && curr->data < created->data)
	{
		curr = curr->right;
	}

	if (tail != nullptr)
	{
		interConnect(created, tail->right);
		interConnect(tail, created);
	}
	else
	{
		head = created;
	}
	tail = created;
}

template<class T>
bool DoubleLinkedList<T>::remove(T searched)
{
	if ( head == nullptr || tail == nullptr )	{	return false;	}
	NODE* curr = head;
	if (head->data == searched)
	{
		curr = head->right;
		interConnect(head->left, head->right);
		delete head;
		head = curr;
		return true;
	}

	while (curr != tail && curr->data != searched)
	{
		curr = curr->right;
	}

	if (curr == tail)
	{
		if (tail->data == searched)
		{
			curr = tail->left;
			interConnect(tail->left, tail->right);
			delete tail;
			tail = curr;
			return true;
		}
		return false;
	}
	interConnect(curr->left, curr->right);
	delete curr;
	return true;
}

template<class T>
bool DoubleLinkedList<T>::exists(T searched)
{
	if ( head == nullptr || tail == nullptr )	{	return false;	}
	NODE curr = head;
	while (curr != nullptr && curr->data != searched)
	{
		curr = curr->right;
	}
	return (curr != nullptr);
}

template<class T>
void DoubleLinkedList<T>::reserveList()
{
	if ( head == nullptr || tail == nullptr )	{	return;		}
	NODE* temp;
	NODE* curr = head;
	while (curr != tail)
	{
		temp = curr->right;
		curr->right = curr->left;
		curr->left = temp;

		curr = curr->left;	//	Interchangeable: curr->left <==> temp.
	}
	temp = tail->right;
	tail->right = tail->left;
	tail->left = temp;
}

template<class T>
void DoubleLinkedList<T>::makeCircular()
{
	interConnect(tail, head);	//	Unlike single linked list, tail will stay for looping purposes.
	circular = true;
}
