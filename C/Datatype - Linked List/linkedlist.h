#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LINKEDLIST
{
	int 	data;
	struct LINKEDLIST*	next;
}LINKEDLIST;

/*	Private functions used by other functions.
void interConnect(LINKEDLIST*, LINKEDLIST*);	//	Takes previous and next nodes, then connects them.
void destroyNode(LINKEDLIST*);						//	Deallocates (LINKEDLIST) node and any aloocated (data).
void getListSize(LINKEDLIST*);					//	Takes head returns number of nodes.
*/

LINKEDLIST* createNode(int);	//	Takes (data), returns (LINKEDLIST) node containing (data).

void addNode(LINKEDLIST*, LINKEDLIST*);			//	Adds node to the end of list. (Unsorted): Use only searchSelective().
void insertNode(LINKEDLIST*, LINKEDLIST*);		//	Adds node like in insertion sort. (Sorted): Usage of searchBinary() is recomended.
void removeNode(LINKEDLIST*, LINKEDLIST*);		//	Takes previous and current node, safely removes current from list.-----[Why previous? Because, you can't trace back in single linked lists.]

LINKEDLIST* searchSelective(LINKEDLIST*, int);	//	Brute force method. Returns NULL if not found.
LINKEDLIST* searchBinary(LINKEDLIST*, int);		//	Binary search, can be implemented with list size. If not found returns pointer to the biggest data smaller than the searched data. Used with insetNode().

void reverseList(LINKEDLIST*, LINKEDLIST*, LINKEDLIST*);		//	Takes head, head and NULL, reverses list links.

#endif
