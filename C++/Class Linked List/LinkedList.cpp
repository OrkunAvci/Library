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
    bool circular;
    bool sorted;

    NODE* createNode(int data)
    {
        struct NODE* created= new struct NODE;
        created->data= data;
        created->next= nullptr;
        return created;
    }

    void reverseListRecursive(NODE* head, NODE* curr, NODE* prev)
    {
        if ( !circular && curr != tail )
        {
            reverseListRecursive(head, curr->next, curr);
        }
        if ( circular && curr != this->head )
        {
            reverseListRecursive(head, curr->next, curr);
        }
        curr->next= prev;
    }

    void updateLink(NODE* target, NODE* updated)
    {
        NODE* curr= head;
        if (circular)
        {
            curr= (head->next != target) ? curr->next : curr;
            while (curr != head && curr->next != target)
            {
                curr= curr->next;
            }
        }
        else
        {
            while (curr != tail && curr->next != target)
            {
                curr= curr->next;
            }
        }
        
        if (curr->next == target)
        {
            curr->next= updated;
        }
    }

public:
	LinkedList()
    {
        sorted= false;
        circular= false;
        head= tail= nullptr;
    }

    ~LinkedList()
    {
        resetAll();
    }

    void resetAll()
    {
        NODE* curr= head;
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
        if (circular)   {   return;     }
        NODE* created= createNode(data);
        tail->next= created;
        tail= created;
        head= (head != nullptr) ? head : tail;
    }

    void addHead(int data)
    {
        NODE* created= createNode(data);
        created->next= head;
        head= created;
        tail= ( circular || tail == nullptr) ? head : tail;
    }

    bool insert(int data)
    {
        if (!sorted)
        {
            addHead(data);  //  Or tail, your choice. But this function is for sorted lists.
            return true;
        }

        NODE* created= createNode(data);
        if ( head == nullptr )
        {
            head= tail= created;
            return true;
        }

        NODE* curr= head;
        while ( curr->next != nullptr && curr->next->data < created->data )
        {
            curr= curr->next;
        }

		created->next= curr->next;
        curr->next= created;
        return true;
    }

	bool remove(int data)
	{
		NODE* curr;
		NODE* prev;
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

    bool exists(int data)
    {
        NODE* curr= head;
        bool control= false;
        if (sorted)
        {
            while ( curr != nullptr && curr->data < data )
            {
                curr= curr->next;
            }
            control= curr->data == data;
        }
        else
        {
            while ( curr != nullptr && curr->data != data )
            {
                curr= curr->next;
            }
            control= curr != nullptr;
        }
        return control;
    }

    void reserveList()
    {
        if (circular)
        {
            reverseListRecursive(this->head, this->head, this->head);
        }
        else
        {
            reverseListRecursive(this->head, this->head, nullptr);
        }
        NODE* temp= head;
        head= tail;
        tail= temp;
    }

    bool makeCircular()
    {
        if ( head == nullptr || tail == nullptr )
        {
            return false;
        }
        tail->next= head;
        tail= nullptr;  //  Will no longer be used.
        circular= true;
    }

};
