#ifndef STACK_H
#define STACK_H

typedef struct STACK
{
	unsigned int point;
	unsigned int size;
	int* data;
}STACK;

void initialize(STACK*, unsigned int);	//	Takes stack and size, and allocates (data).
void terminate(STACK*);					//	Deallocates (data) and resets other values.

int pop(STACK*);			//	Returns single value at (point -1).
void push(STACK*, int);		//	Stores single value at (point).

#endif
