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

void SinglyLL :: InsertFirst(int no)
{}

void SinglyLL :: InsertLast(int no)
{}

void SinglyLL :: InsertAtPos(int no,int ipos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int ipos)
{}

void SinglyLL :: Display()
{}

int SinglyLL :: Count()
{
    return 0;
}
SinglyLL :: SinglyLL()
{
    cout<<"Inside COnstructor";

    First = NULL;
    iCount = 0;
}


int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

   // error  cout<<"Size ofLL is: "<<obj1.iCount;

    return 0;
}