#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float mark;
    cout<<"Enter your marks: ";
    cin>>mark;


    if (mark >= 33)
    {
        if (mark > 100)
    {
        cout<<"Invalid mark.";
    }
    else if (mark >= 80)
    {
        cout<<"A+";
    }
    else if (mark >= 70)
    {
        cout<<"A";
    }
    else if (mark >= 60)
    {
        cout<<"A-";
    }
    else if (mark >= 50)
    {
        cout<<"B";
    }
    else if (mark >= 40)
    {
        cout<<"C";
    }
    else if (mark >= 33)
    {
        cout<<"C";
    } 
    }
    else
    {
        cout<<"Failed.";
    }


    getch();
}