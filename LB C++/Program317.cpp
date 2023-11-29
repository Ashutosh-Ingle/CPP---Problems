#include<iostream>
using namespace std;

typedef class Node
{
    public: 
    int data;
    struct Node *next;
    struct Node *prev;

    Node()
    {
        data = 0;
        next = NULL;
        prev=NULL;
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
                cout<<"|"<<temp-> data<<"|->";
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

void DoublyCL :: InsertFirst(int no)
{}

void DoublyCL :: InsertLast(int no)
{}

void DoublyCL :: InsertAtPos(int no,int ipos)
{}

void DoublyCL :: DeleteFirst()
{}

void DoublyCL :: DeleteLast()
{}

void DoublyCL :: DeleteAtPos(int ipos)
{}
DoublyCL :: DoublyCL()
{
    Last = NULL;
}
DoublyCL :: ~DoublyCL()
{}

int main()
{
    DoublyCL obj;

    obj.Display();
    cout<<"Length of linked list is : "<< obj.Count()<<"\n";
    
    return 0;
}