#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

typedef struct LinkedListNode
{
	LinkedListNode* next;
	int data;
};

LinkedListNode * ll_create_node(int);

void ll_delete_next(LinkedListNode*);

void ll_add_last(LinkedListNode*, LinkedListNode*);

void ll_add_last(LinkedListNode * head, int input_data);

void ll_insert(LinkedListNode*, LinkedListNode*);

void ll_insert(LinkedListNode*, int);

void ll_reverse(LinkedListNode*, LinkedListNode*, LinkedListNode*);

void ll_partial_reverse(LinkedListNode*, LinkedListNode*, LinkedListNode*, LinkedListNode*);

#endif // !__LINKEDLIST_H__
