#pragma once

template<class T>
class DoubleLinkedList
{
private:
	struct NODE
	{
		T data;
		struct NODE* left;
		struct NODE* right;
	};
	NODE* head;
	NODE* tail;
	bool circular;
	bool sorted;

	void interConnect(NODE*, NODE*);

public:
	DoubleLinkedList();
	~DoubleLinkedList();

	void resetAll();

	void add(T);
	void insert(T);
	bool remove(T);

	bool exists(T);

	void reserveList();

	void makeCircular();

};
