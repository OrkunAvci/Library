#include "stack.h"

void initialize(STACK* st, unsigned int size)	//	Dependency: std::calloc()
{
	st->point= 0;
	st->size= size;
	st->data= calloc(size, sizeof(int));
}

void terminate(STACK* st)	//	Dependency: std::free()
{
	st->point= st->size= 0;
	free(st->data);
	free(st);
}

int pop(STACK* st)
{
	if ( st->point ==0 )	{	return	-1;		}	//	Configure to an impossible value.
	st->point--;
	return st->data[st->point];
}

void push(STACK* st, int addon)
{
	if ( st->point ==st->size )	{	return;		}
	st->data[st->point]= addon;
	st->point++;
}


