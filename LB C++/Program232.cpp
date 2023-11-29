//Accept a number from user check whether 3rd bit is on or not
#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 4;
    unsigned int iResult = 0;

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
    unsigned int iValue = 0;
    bool bRet = false;

    cout<<"Enter number: ";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet ==true)
    {
        cout<<"3rd bit is on"<<"\n";
    }
    else
    {
        cout<<"3rd bit is off"<<"\n";
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