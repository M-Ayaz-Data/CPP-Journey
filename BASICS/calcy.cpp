#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float num1,num2;
    char operation;
    
    cout<<"\t\t\t\t\t**User Friendly Calculator**"<<endl;

    cout<<"Enter No.1 and No.2 : ";
    cin>>num1>>num2;
    cout<<"Enter Operetor : ";
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<num1<<operation<<num2<<endl;
        cout<<"Result = "<<num1+num2;
        break;

    case '-':
        cout<<num1<<operation<<num2<<endl;
        cout<<"Result = "<<num1-num2;
        break;

    case '*':
        cout<<num1<<operation<<num2<<endl;
        cout<<"Result = "<<num1*num2;
        break;

    case '/':
        cout<<num1<<operation<<num2<<endl;
        cout<<"Result = "<<num1/num2;
        break;

    case '%':
        cout<<num1<<operation<<num2<<endl;
        // Use round method from cmath lib... and static_cast<>() --> better practice and modern
        cout<<"Result ="<<static_cast<int>(round(num1))%static_cast<int>(round(num2));
        break;
    default:
        cout<<"Typing Error";
        break;
    }

   return 0;
}