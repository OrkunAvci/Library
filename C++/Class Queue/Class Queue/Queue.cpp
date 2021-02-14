#include "Queue.h"

template<class T>
Queue<T>::Queue(T invalidValue) : invalidDataValue(invalidValue)
{
	head = tail = nullptr;
}

template<class T>
Queue<T>::~Queue()
{
	while (head != nullptr)
	{
		tail = head->next;
		delete head;
		head = tail;
	}
}

template<class T>
bool Queue<T>::enqueue(T addon)
{
	NODE* created = new NODE;
	if ( created == nullptr )	{	return false;		}

	created->data = addon;
	created->next = nullptr;

	tail->next = created;
	tail = tail->next;;
	return true;
}

template<class T>
T Queue<T>::dequeue()
{
	if (head == nullptr)
	{
		return invalidDataValue;
	}

	NODE* curr = head;
	head = head->next;

	T data = curr->data;
	delete curr;
	return data;
}
