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

public:
    LinkedList()
    {

    }

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

};