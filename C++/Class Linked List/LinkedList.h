#pragma once
#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

template<class T>
class LinkedList
{
private:
	struct NODE
	{
		T data;
		struct NODE* next;
	};
	NODE* head;
	NODE* tail;
	bool circular;
	bool sorted;

	NODE* createNode(T);
	void reverseListRecursive(NODE* head, NODE* curr, NODE* prev);
	void updateLink(NODE* target, NODE* updated);

public:
	LinkedList();
	~LinkedList();

	void resetAll();

	void addTail(T);
	void addHead(T);
	bool insert(T);
	bool remove(T);

	bool exists(T);

	void reserveList();

	bool makeCircular();

};

#endif // !__LINKEDLIST_H__
