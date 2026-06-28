#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float x;
    cout<<"Enter a random number: ";
    cin>>x;

    if(x > 0)
    {
        cout<<x<<" is a positive number";
    }

    else if (x == 0)
    {
        cout<<x<< " is a zero.";
    }

    else
    {
        cout<<x<<" is a negative number";
    }
    


    getch();
}