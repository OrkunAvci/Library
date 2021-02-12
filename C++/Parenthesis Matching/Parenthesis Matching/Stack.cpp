#include "Stack.h"

template <class T>
Stack<T>::Stack(T invalidValue)
{
	this->invalidDataValue = invalidValue;
	this->top = nullptr;
}

template <class T>
Stack<T>::~Stack()
{
	NODE* nextNode;
	while (top != nullptr)
	{
		nextNode = top->next;
		delete top;
		top = nextNode;
	}
}

template <class T>
bool Stack<T>::push(T data)
{
	NODE* created = new NODE;
	if (created == nullptr)
	{
		return false;
	}
	created->data = data;
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

	T popped = top->data;
	NODE* next = top->next;
	delete top;
	top = next;

	return popped;
}

template <class T>
T Stack<T>::peek(unsigned int index)
{
	NODE* curr = top;
	for (unsigned int i = 0; curr != nullptr && i < index; i++, curr = curr->next);
	return curr->data;
}

template class Stack<char>;
