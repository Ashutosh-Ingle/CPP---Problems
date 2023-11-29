// Take decimal number input form user and give its corresponding binary number;
#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0;

    cout<<"Binary conversion is: "<<iNo<<"\n";

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        cout<<iDigit;
        iNo = iNo /16;
    }
    cout<<"\n";
}
int main()
{
    int iValue = 0;

    cout<<"Enter number: "<<"\n";
    cin>>iValue;

    DisplayHexadecimal(iValue);
    return 0;
}