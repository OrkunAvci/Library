#ifndef QUEUE_H
#define QUEUE_H

typedef struct QUEUE
{
	unsigned int front;
	unsigned int back;
	unsigned int size;
	int* data;
}QUEUE;

void initialize(QUEUE*, unsigned int);	//	Takes queue and size, and allocates (data).
void terminate(QUEUE*);					//	Deallocates (data) and resets other values.

int deque(QUEUE*);			//	Returns single value at (back).	[Overflow Control]
void enque(QUEUE*, int);	//	Stores single value at (front).

#endif
