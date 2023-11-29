#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;        //Characteristics 
        int iCount;         //Characteristics

    public:
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

//Implementation of all behaviours:
/*
    Return_Value Class_Name :: Function_Name(Parameter_List)
    {
        Function_Body;
    }
*/


int main()
{
    SinglyLL obj1();

    return 0;
}