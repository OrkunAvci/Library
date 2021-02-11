#include "Stack.h"

template <class T>
typename Stack<T>::NODE* Stack<T>::createNode(T data)
{
	struct NODE created = new struct NODE;
	created.data = data;
	created.next = nullptr;
	return created;
}

template <class T>
void Stack<T>::deleteNode(NODE* target)
{
	delete target;
}

template <class T>
Stack<T>::Stack(T invalidValue) : invalidDataValue(invalidValue)
{
	this->top = nullptr;
}

template <class T>
Stack<T>::~Stack()
{
	NODE* nextNode = top->next;
	while (top)
	{
		deleteNode(top);
		top = nextNode;
		nextNode = top->next;
	}
}

template <class T>
bool Stack<T>::push(T)
{
	NODE* created = createNode(T);
	if (created == nullptr)
	{
		return false;
	}
	created->next = top;
	top = created;
	return true;
}

template <class T>
T Stack<T>::pop()
{
	if (top == nullptr)
	{
		return invalidDataValue;
	}
	NODE* popped = top;
	top = top->next;
	return popped;
}

template <class T>
T Stack<T>::peek(unsigned int index)
{
	NODE* curr = top;
	for (unsigned int i = 0; curr != nullptr && i < index; i++, curr = curr->next);
	return curr;
}
