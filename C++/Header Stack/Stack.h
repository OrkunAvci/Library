#ifndef STACK_H
#define STACK_H

class Stack
{
	private:
		int *stack;
		unsigned int size;
		unsigned int pointer;

		bool isFull();
		bool isEmpty();
		
	public:
		Stack(int);
		~Stack();

		int pop();
		bool push(int);
};

#endif STACK_H
