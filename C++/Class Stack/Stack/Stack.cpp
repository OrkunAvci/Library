#include "Stack.h"

template<class T>
Stack<T>::Stack(unsigned int size)
{
	this->size = size;
	this->st = new T[size];
	this->marker = 0;
}

template<class T>
Stack<T>::~Stack()
{
	delete []st;
}

template<class T>
bool Stack<T>::isEmpty()
{
	return (marker == 0);
}

template<class T>
bool Stack<T>::isFull()
{
	return (marker == size);
}

template<class T>
void Stack<T>::push(T element)
{
	if (isFull())	{	return;		}
	st[marker++] = element;
}

template<class T>
T Stack<T>::pop()
{
	if (isEmpty())
	{
		return 0;	//	Impossible value.
	}
	return st[--marker];
}

template<class T>
T Stack<T>::peek(unsigned int index)
{
	return st[index];
}
