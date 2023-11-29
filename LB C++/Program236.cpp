//Accept a number from user check whether 11th bit is on or not
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X400;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number: ";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet ==true)
    {
        cout<<"11th bit is on"<<"\n";
    }
    else
    {
        cout<<"11th bit is off"<<"\n";
    }

    return 0;
}

/*
No : 13

Binary = 0   0   0   0   1   1   0   1
MASK  =  0   0   0   0   0   1   0   0   
-----------------------------------------------
&      = 0   0   0   0   0   1   0   0   
*/