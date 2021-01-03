#include "queue.h"

//	Private control functions, used by other functions here. Not declared in the header.
int isQueueFull(QUEUE* que)
{
	return (que->front- que->back) ==que->size;
}

int isQueueEmpty(QUEUE* que)
{
	return (que->front- que->back) ==0;
}


//	Declared Functions:
void initialize(QUEUE* que, unsigned int size)	//	Dependency: std::calloc()
{
	que->back= que->front= 0;
	que->size= size;
	que->data= calloc(size, sizeof(int));
}

void terminate(QUEUE* que)	//	Dependency: std::free()
{
	que->back= que->front= que->size= 0;	//	Ready for reinnitialization.
	free(que->data);
	free(que);
}

int deque(QUEUE* que)
{
	if (isQueueEmpty(que))	{	return -1;		}	//	Customize to an impossible data value.
	que->back++;
	if (que->back ==que->size)	//	Overflow protection against big size values. Disable if queue is not used excessively.
	{
		que->back= 0;
		que->front= que->front% que->size;
		return que->data[que->size- 1];
	}
	return	que->data[que->back- 1];
}

void enque(QUEUE* que, int addon)
{
	if (isQueueFull(que))	{	return;			}
	que->data[ que->front% que->size ]= addon;
	que->front++;
}
