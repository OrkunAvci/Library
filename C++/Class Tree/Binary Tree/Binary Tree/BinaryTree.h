#pragma once

template <class T>
class BinaryTree
{
private:
	struct NODE
	{
		T data;
		BinaryTree* parent;
		BinaryTree* left;
		BinaryTree* right;
	};
	NODE* root;
	bool sorted;


public:
	BinaryTree();
	~BinaryTree();

	void add(T);		//	Unsorted function.
	void insert(T);		//	Sorted function.
	void remove(T);

};

