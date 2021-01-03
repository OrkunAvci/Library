<template LinkedListNode>
void linkedList_reverse(LinkedListNode* head, LinkedListNode* current, LinkedListNode* prev= NULL)
{
	if (currentNode->next != NULL)
	{
		reverse_linked_list(head, current->next, current);
	}
	else  // End of the list and also the new head.
	{
		head= current;
	}
	current->next= prev;
}

<template LinkedListNode>
LinkedListNode* linkedList_reverse(LinkedListNode* current, LinkedListNode* prev= NULL)
{
	LinkedListNode* head= NULL;
	if (currentNode->next != NULL)
	{
		head= reverse_linked_list(head, current->next, current);
	}
	else  // End of the list and also the new head.
	{
		head= current;
	}
	current->next= prev;
	return head;	// Updated head. Must be assigned.
}
