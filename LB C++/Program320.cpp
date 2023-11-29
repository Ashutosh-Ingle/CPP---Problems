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

void DoublyCL :: DeleteFirst()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;      //delete First->prev;

        First -> prev = Last;
        Last -> next = First;
    }
    iCount--;
}

void DoublyCL :: DeleteLast()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
    }
    else
    {
        Last = Last->prev;
        delete Last -> next;

        First-> prev = Last;
        Last -> next = First;
    }
    iCount--;
}

void DoublyCL :: InsertAtPos(int no,int ipos)
{
    if((ipos <1)|| ( ipos >iCount +1))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount +1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt = ipos -1 ; iCnt++)
        {
            temp = temp ->next;
        }
        PNODE newn = new NODE;
        newn ->next = temp-> next;
        temp ->next -> prev =newn;

        temp->next = newn;
        newn ->prev = temp;
       
    }
     iCount++;
}
void DoublyCL :: DeleteAtPos(int ipos)
{
    if((ipos <1)|| ( ipos >iCount))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt = ipos -1 ; iCnt++)
        {
            temp = temp ->next;
        }
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

      
    }
    iCount--;
}

int main()
{
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    cout<<"Length of linked list is : "<<obj.Count()<<"\n";

    obj.InsertAtPos(55,4);
    obj.Display();
    cout<<"Length of linked list is : "<<obj.Count()<<"\n";

    obj.DeleteAtPos(4);    
    obj.Display();
    cout<<"Length of linked list is : "<<obj.Count()<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    cout<<"Length of linked list is : "<<obj.Count()<<"\n";
    
    return 0;
}