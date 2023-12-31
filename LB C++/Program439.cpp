#include<iostream>
using namespace std;

//Structure for singly linear and singly circular
template<class T>
struct NodeS                //S : Singly
{
    T data;
    struct NodeS *next;
};

//Structure for doubly linear and doubly circular
template<class T>
struct NodeD                //D : Doubly
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

//class of singly linear linked list
template<class T>
class SinglyLL
{
    public:
        struct NodeS<T> *first;
        int iCount;

    SinglyLL();
    
    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

//class of singly circular linked list
template<class T>
class SinglyCL
{
    public:
        struct NodeS<T> *first;
        struct NodeS<T> *last;
        int iCount;

    SinglyCL();
    
    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

//class of doubly linear linked list 
template<class T>
class DoublyLL
{
    public:
        struct NodeD<T> *first;
        int iCount;

    DoublyLL();
    
    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

//class of doubly circular linked list
template<class T>
class DoublyCL
{
    public:
        struct NodeD<T> *first;
        struct NodeD<T> *last;
        int iCount;

    DoublyLL();
    
    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

//Logic of 32 functions

int main()
{
    return 0;
}