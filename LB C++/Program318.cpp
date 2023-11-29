#include<iostream>
using namespace std;

typedef class Node
{
    public: 
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
}NODE, *PNODE;

class LinkedList
{
    public:
        PNODE First;
        int iCount;

        LinkedList()
        {
            First = NULL;
            iCount = 0;
        }

        virtual void InsertFirst(int no) = 0;
        virtual void InsertLast(int no) = 0;
        virtual void InsertAtPos(int no, int ipos) = 0;

        virtual void DeleteFirst() = 0;
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int ipos) = 0;

        void Display()
        {
            PNODE temp = First;

            cout<<"Elements of the linked list are: "<<"\n";

            for(int iCnt = 1 ; iCnt <= iCount; iCnt++)
            {
                cout<<"|"<<temp->data<<"|->";
                temp = temp-> next;
            }
            cout<<"NULL"<<"\n";
        }
        int Count()
        {
            return iCount;
        }
};

class DoublyCL : public LinkedList
{
    private:
    PNODE Last;

    public:

        DoublyCL();
        ~DoublyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
};


DoublyCL :: DoublyCL()
{
    Last = NULL;
}
DoublyCL :: ~DoublyCL()
{}

void DoublyCL :: InsertFirst(int no)
{
    PNODE newn = new NODE(no);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn ;
    }
    else
    {
        newn ->next = First;
        First ->prev = newn;
        First = newn;
    }
    Last ->next = First;
    First -> prev = Last;
    iCount++;
}

void DoublyCL :: InsertLast(int no)
{
    PNODE newn = new NODE(no);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn ;
    }
    else
    {
        Last -> next = newn;
        newn -> prev = Last;
        Last = Last -> next;
    }
    Last ->next = First;
    First -> prev = Last;
    iCount++;
}

void DoublyCL :: InsertAtPos(int no,int ipos)
{}

void DoublyCL :: DeleteFirst()
{}

void DoublyCL :: DeleteLast()
{}

void DoublyCL :: DeleteAtPos(int ipos)
{}

int main()
{
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertLast(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    cout<<"Length of linked list is : "<<obj.Count()<<"\n";
    
    return 0;
}