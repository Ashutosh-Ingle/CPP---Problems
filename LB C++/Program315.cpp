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

class DoublyCL
{
    private:
    PNODE First;
    PNODE Last;
    int iCount;

    public:

        DoublyCL();
        ~DoublyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
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

void DoublyCL :: Display()
{}

int DoublyCL :: Count()
{
    return 0;
}
DoublyCL :: DoublyCL()
{
   
}

int main()
{
    DoublyCL dobj;
    
    return 0;
}