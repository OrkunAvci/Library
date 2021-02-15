#pragma once

template <class T>
class PriorityQueue
{
private:
	struct NODE
	{
		T data;
		unsigned int priority;
		struct NODE* next;
	};
	NODE* head;
	static const T invalidDataValue;

public:
	PriorityQueue(T);
	~PriorityQueue();

	void enqueue(T, unsigned int);
	T dequeue();

	bool exists(T);
	void outdate(T);
};
