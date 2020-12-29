class LinkedList
{
private:
	struct NODE
    {
        int data;
        struct NODE* next;
    };
    NODE* head;
    NODE* tail;

    NODE* createNode(int data)
    {
        struct NODE* created= new struct NODE;
        created->data= data;
        created->next= nullptr;
    }

public:
	LinkedList(){}

    ~LinkedList()
    {
        resetAll();
    }

    void resetAll()
    {
        struct NODE* curr= head;
        while ( head != tail )
        {
            head= curr;
            curr= head->next;
            delete head;
        }
        delete head;
    }

    void addTail(int data)
    {
        struct NODE* created= createNode(data);
        tail->next= created;
    }

    void addHead(int data)
    {
        struct NODE* created= createNode(data);
        created->next= head;
        head= created;
    }

    bool insert(int data)
    {
        struct NODE* created= createNode(data);
        if ( head == nullptr )  {   head= tail= created;    return true;    }
        struct NODE* curr= head;
        while ( curr->next->data < created->data && curr != nullptr )  {	curr= curr->next;	}
		if ( curr != nullptr )
		{
			created->next= curr->next;
			curr->next= created;
			return true;
		}
		return false;
    }

	bool remove(int data)
	{
		struct NODE* curr;
		struct NODE* prev;
		curr= head;
		while ( curr != nullptr && curr->data != data )
		{
			prev= curr;
			curr= curr->next;
		}
		if ( curr != nullptr )
		{
			prev->next= curr->next;
			delete curr;
			return true;
		}
		return false;
	} 

};
