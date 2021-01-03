#include "LinkedList.h"

LinkedListNode* ll_create_node(int input_data)
{
	LinkedListNode* created = new LinkedListNode;
	created->data = input_data;
	created->next = nullptr;
	return created;
}

void ll_delete_next(LinkedListNode* curr)
{
	LinkedListNode* temp = curr->next;
	curr->next = temp->next;
	delete temp;
}

void ll_add_last(LinkedListNode* head, LinkedListNode* addon)
{
	LinkedListNode* curr = head;
	while ( curr->next != nullptr )		{	curr = curr->next;	 }
	curr->next = addon;
}

void ll_add_last(LinkedListNode* head, int input_data)
{
	ll_add_last(head, ll_create_node(input_data));
}

void ll_insert(LinkedListNode* head, LinkedListNode* addon)	//	For sorted lists.
{
	LinkedListNode* curr = head;
	while ( curr->next->data < addon->data )	{	curr = curr->next;	}
	addon->next = curr->next;
	curr->next = addon;
}

void ll_insert(LinkedListNode* head, int input_data)
{
	ll_insert(head, ll_create_node(input_data));
}

LinkedListNode* ll_search(LinkedListNode* head, int searched)
{
	LinkedListNode* curr = head;
	while ( curr != nullptr && curr->data != searched )	{	curr = curr->next;	}
	return curr;
}

void ll_reverse(LinkedListNode* head, LinkedListNode* curr, LinkedListNode* prev = nullptr)
{
	if (curr->next != nullptr)
	{
		ll_reverse(head, curr->next, curr);
	}
	else
	{
		head = curr;
	}
	curr->next = prev;
}

void ll_partial_reverse(LinkedListNode* from, LinkedListNode* upto, LinkedListNode* curr, LinkedListNode* prev= upto)
{
	if (curr->next != upto)
	{
		ll_partial_reverse(from, upto, curr->next, curr);
	}
	else
	{
		from = curr;
	}
	curr->next = prev;
}

int ll_size(LinkedListNode* head)
{
	LinkedListNode* curr = head;
	int size = 0;
	while ( curr != nullptr )	{	curr = curr->next;	size++;	}
	return size;
}
