#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a intiger number:";
    cin>>num;

    if(num % 2 == 0)
    {
        cout<<num<< " is a even number.";
    }

    else
    {
        cout<<num<< " is a odd number.";
    }


    getch();
}