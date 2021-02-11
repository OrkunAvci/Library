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
		struct NODE* next;
	};
	NODE* top;
	static const T invalidDataValue;	//	Static has a question mark after it. Definition may not apply to all use cases.

	NODE* createNode(T);
	void deleteNode(NODE*);

public:

	Stack(T);
	~Stack();

	bool push(T);
	T pop();
	T peek(unsigned int);

};

#endif // !__STACK_H__
