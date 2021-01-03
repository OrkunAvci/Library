class BinarySeachTree
{
private:
	struct NODE
	{
		NODE* parent;
		NODE* left;
		NODE* right;
		int data;
	};
	NODE* root;

	NODE* createNode(int data)
	{
		NODE* created = new NODE;
		created->data = data;
		created->left = created->right = created->parent = nullptr;
		return created;
	}

	bool updateLink(NODE* curr, NODE* target, NODE* updated)
	{
		if		(curr->left == target)	{	curr->left = updated;	}
		else if (curr->right == target) {	curr->right = updated;	}
		else							{	return false;			}
		return true;
	}

public:

	BinarySeachTree()
	{

	}

	~BinarySeachTree()
	{

	}

	//	Utility Functions:
	NODE* mostLeft(NODE* curr)
	{
		while (curr->left != nullptr)	{	curr = curr->left;	}
		return curr;
	}

	NODE* mostRight(NODE* curr)
	{
		while (curr->right != nullptr)	{	curr = curr->right;	}
		return curr;
	}

	bool isLeaf(NODE* curr)
	{
		return ( curr->left == nullptr && curr->right == nullptr );
	}

	bool isRoot(NODE* curr)
	{
		return (curr->parent == nullptr);
	}

	unsigned int height(NODE* curr)
	{
		if (curr == nullptr)	{	return 0;	}

		unsigned int heightLeft = height(curr->left);
		unsigned int heightRight = height(curr->right);

		return 1+ (heightLeft > heightRight) ? heightLeft : heightRight;
	}

	//	Add/Remove functions:
	void add(int data)
	{
		NODE* addon = createNode(data);
		if (root == nullptr)
		{
			root = addon;
			return;
		}

		NODE* curr = root;
		bool control = true;
		while (control)
		{
			if (addon->data <= curr->data)
			{
				if (curr->left == nullptr)
				{
					addon->parent = curr;
					curr->left = addon;
					control = false;
				}
				else
				{
					curr = curr->left;
				}
			}
			else /* addon->data > curr->data */		//	This line is searchable with ctrl + f.
			{
				if (curr->right == nullptr)
				{
					addon->parent = curr;
					curr->right = addon;
					control = false;
				}
				else
				{
					curr = curr->right;
				}
			}
		}
	}

	NODE* orphan(NODE* curr)
	{
		
	}

	//	Tree Manipulation Funcitons:

};
