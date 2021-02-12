#pragma once
#ifndef __STACK_H__
#define __STACK_H__

template <class T>
class Stack
{
private:
	struct NODE
	{
		T data;
		NODE* next;
	};
	NODE* top;
	T invalidDataValue;

public:
	Stack(T);
	~Stack();

	bool push(T);
	T pop();
	T peek(unsigned int);

};

#endif // !__STACK_H__
