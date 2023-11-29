// OFF the 7th bit of number
#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    return(iNo & 0XFFFFFFBF);
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
   }