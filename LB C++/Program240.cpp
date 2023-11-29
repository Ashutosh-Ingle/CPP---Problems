//Accept a number from user check whether the bit is on or not
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00102040;
    UINT iResult = 0;

    if(iPos <1 || iPos >32)
    {
        cout<<"Invalid Position"<<"\n";
        return false;
    }

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
    UINT iBit = 0;

    bool bRet = false;

    cout<<"Enter number: ";
    cin>>iValue;

    cout<<"Enter the bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue,iBit);

    if(bRet ==true)
    {
        cout<<"Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bit is OFF"<<"\n";
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