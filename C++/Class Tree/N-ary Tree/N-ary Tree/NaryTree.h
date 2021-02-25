#pragma once

template <class T>
class NaryTree
{
private:
	struct NODE
	{
		T data;
		NODE* firstChild;
		NODE* nextSibling;
		//NODE* prevSibling;		Optional. Requires customization in functions.
	};
	NODE* root;

	void clear(NODE*);
	void* search(T);

public:
	NaryTree();
	~NaryTree();

	void insert(T, bool);
	void remove(T);

	bool exists(T);
};

