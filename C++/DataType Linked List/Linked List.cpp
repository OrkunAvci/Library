class LinkedList
{
private:
	struct NODE
    {
        int data;
        struct NODE* next;
    };
    struct NODE* head;
    struct NODE* tail;

    struct NODE* createNode(int data)
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

    void insert(int data)
    {
        struct NODE* created= createNode(data);
        struct NODE* curr= head;
        while ( curr->next->data < created->data )  {	curr= curr->next;	}
		created->next= curr->next;
		curr->next= created;
    }

};