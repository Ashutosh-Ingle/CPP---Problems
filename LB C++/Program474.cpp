#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();

};

ArrayX :: ArrayX(int iNo)
{
    cout<<"Inside constructor"<<"\n";
    this->iSize = iNo;
    this->Arr = new int[iSize];
}
ArrayX :: ~ArrayX()
{
    cout<<"Inside destructor"<<"\n";
    delete []Arr;
}

void ArrayX:: Accept()
{
    cout<<"Inside Accept"<<"\n";
    cout<<"Enter the elements : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX:: Display()
{
        cout<<"Inside Display"<<"\n";

    cout<<"Elements of array are : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    cout<<"Inside Main"<<"\n";

    int iValue = 0;

    cout<<"Enter the size of array : \n";
    cin>>iValue;

    ArrayX obj(iValue);
    obj.Accept();
    obj.Display();

    cout<<"End of main"<<"\n";

    return 0;
}