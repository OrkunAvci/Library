#pragma once

template <class T>
class Queue
{
private:
	struct NODE
	{
		T data;
		strcut NODE* next;
	};
	NODE* head;
	NODE* tail;
	static const invalidDataValue;

public:
	Queue(T);
	~Queue();

	bool enqueue(T);
	T dequeue();

};
