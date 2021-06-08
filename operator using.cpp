#include <iostream>
using namespace std;
int main()
{
    char ch;
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the operator you want(+, -, x, /) :";
    cin>>ch;
if(ch=='+')
{
    cout<<"Addition is :" <<num1+num2;
}
else if(ch=='-')
{
    cout<<"Subtraction is :"<<num1-num2;
}
else if(ch=='+')
{
    cout<<"Multiplication is :"<<num1*num2;
}
else if(ch=='+')
{
    cout<<"Division is :"<<num1/num2;
}
else
{
    cout<<"This operator not in use";
}
return 0;
}
