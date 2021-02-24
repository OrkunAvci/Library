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

	void updateLink(NODE*, NODE*, NODE*);

public:
	BinaryTree();
	~BinaryTree();

	void insert(T);
	void insert(NODE*, NODE*);
	void remove(T);
	void clear(NODE*);

	bool exists(T);
};

