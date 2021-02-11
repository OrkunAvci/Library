#pragma once

template<class T>
class Stack
{
private:
	T* st;
	unsigned int size;		//	Size of stack.
	unsigned int marker;	//	Marker to where new elements will be pushed. Control isEmpty() and isFull().

	bool isEmpty();
	bool isFull();

public:
	Stack(unsigned int);
	~Stack();

	void push(T);
	T pop();
	T peek(unsigned int);
};

