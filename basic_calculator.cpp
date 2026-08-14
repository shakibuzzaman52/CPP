#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char oper;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;

    cout<<"Enter operator :";
    cin>>oper;


    // // Useing if else
    // if(oper == '+')
    // {
    //     cout<<"A + B = "<<a + b;
    // }
    // else if(oper == '-')
    // {
    //     cout<<"A - B = "<<a - b;
    // }
    // else if(oper == '*')
    // {
    //     cout<<"A * B = "<<a * b;
    // }
    // else if(oper == '/')
    // {
    //     cout<<"A / B = "<<(float)a / b;
    // }
    // else if(oper == '%')
    // {
    //     cout<<"A % B = "<<a % b;
    // }
    // else
    // {
    //     cout<<"Envalid Operator!";
    // }


    // Useing Switch Statement
    switch(oper)
    {
        case '+' : cout<<"A + B = "<<a + b;
                   break;
        case '-' : cout<<"A - B = "<<a - b;
                   break;
        case '*' : cout<<"A * B = "<<a * b;
                   break;
        case '/' : cout<<"A / B = "<<a / b;
                   break;
        case '%' : cout<<"A % B = "<<a % b;
                   break;
        default : cout<<"Envalid Operator";
    }

    return 0;
}