#include "linkedlist.h"
#ifndef STDIO_H
#define STDIO_H

//	Private functions: (Used by other fuctions here.)
void interConnect(LINKEDLIST* prev, LINKEDLIST* next)
{
	prev->next= next;
}

void destroyNode(LINKEDLIST* node)		//	Dependency: free().
{
	//	Dealloc data here:
	
	//	-----------------
	free(node);
}

int getListSize(LINKEDLIST* curr)
{
	int size= 0;
	while (curr)	{	size++;		curr= curr->next;	}
	return size;
}

//	Defined functions:
//	Create/Destroy functions:
LINKEDLIST* createNode(int data)	//	Dependency: calloc().
{
	LINKEDLIST* node= calloc(1, sizeof(LINKEDLIST));
	node->data= data;
	node->next= ((void*)0);	//	= NULL. (F you compiler).
	return node;
}

//	Add/Remove functions:
void addNode(LINKEDLIST* head, LINKEDLIST* addon)
{
	LINKEDLIST* pointer= head;
	while (pointer->next)	{	pointer= pointer->next;		}
	pointer->next= addon;
}

void insetNode(LINKEDLIST* head, LINKEDLIST* addon)
{
	if ( addon->data <head->data )
	{
		interConnect(addon, head);
		head= addon;
	}
	LINKEDLIST* pointer= searchBinary(head, addon->data);	//	Returns the biggest node smaller than addon.
	interConnect(addon, pointer->next);
	interConnect(pointer, addon);
}

void removeNode(LINKEDLIST* prev, LINKEDLIST* curr)
{
	interConnect(prev, curr->next);
	destroyNode(curr);
}

//	Search functions:
LINKEDLIST* searchSelective(LINKEDLIST* head, int searched)
{
	LINKEDLIST* pointer= head;
	while (pointer && pointer->data !=searched)	{	pointer= pointer->next;		}
	return pointer;
}

LINKEDLIST* searchBinary(LINKEDLIST* head, int searched)
{
	LINKEDLIST* pointer= head;
	LINKEDLIST* curr= head;
	int size= getListSize(head);
	int counter;
	while ( curr->data !=searched && size >1 )
	{
		counter= 0;
		size= ( size+ 1 )/ 2;
		while (pointer && counter <size)
		{
			counter++;
			pointer= pointer->next;
		}
		if ( pointer && pointer->data <=searched )
		{
			curr= pointer;
		}
	}
	return curr;
}

//	list manipulations:
void reverseList(LINKEDLIST* head, LINKEDLIST* curr, LINKEDLIST* prev)
{
	if	(curr->next)	{	reverseList(head, curr->next, curr);	}
	else				{	head= curr;		}
	curr->next= prev;
}

#endif
