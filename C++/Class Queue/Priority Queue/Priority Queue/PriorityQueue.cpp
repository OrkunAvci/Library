#include "PriorityQueue.h"

template<class T>
PriorityQueue<T>::PriorityQueue(T invalidValue) : invalidDataValue(invalidValue)
{
	head = nullptr;
}

template<class T>
PriorityQueue<T>::~PriorityQueue()
{
	NODE* nextNode;
	while (head != nullptr)
	{
		nextNode = head->next;
		delete head;
		head = nextNode;
	}
}

template<class T>
void PriorityQueue<T>::enqueue(T data, unsigned int priority)
{
	NODE* created = new NODE;
	if (created == nullptr)	{	return;		}
	created->data = data;
	created->priority = priority;

	if (head->priority < created->priority)
	{
		created->next = head;
		head = created;
		return;
	}

	NODE* curr = head;
	while ( curr->next != nullptr && curr->next->priority >= created->priority )
	{
		curr = curr->next;
	}
	created->next = curr->next;
	curr->next = created;
}

template<class T>
T PriorityQueue<T>::dequeue()
{
	if (head == nullptr)	{	return invalidDataValue;	}
	NODE* curr = head;
	head = head->next;

	T data = curr->data;
	delete curr;
	return data;
}

template<class T>
bool PriorityQueue<T>::exists(T searched)
{
	NODE* curr = head;
	while (curr != nullptr && curr->data != searched)
	{
		curr = curr->next;
	}
	return curr != nullptr;
}

template<class T>
void PriorityQueue<T>::outdate(T searched)
{
	if (head ==nullptr || head->data == searched)
	{
		dequeue();	//	Safe for null.
		return;
	}

	NODE* curr = head;
	while (curr->next != nullptr && curr->next->data != searched)
	{
		curr = curr->next;
	}
	if (curr->next != nullptr)
	{
		NODE* next = curr->next;
		curr->next = curr->next->next;
		delete next;
	}
}
