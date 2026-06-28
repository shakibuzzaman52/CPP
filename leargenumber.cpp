#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter three number :";
    cin>>a>>b>>c;


    if (a > b && a> c)
    {
        cout<<a<<" is large number.";
    }

    else if(b > a && b> c)
    {
        cout<<b<<" is large number";
    }

    else
    {
        cout<<c <<" is large number.";
    }

    getch();
}