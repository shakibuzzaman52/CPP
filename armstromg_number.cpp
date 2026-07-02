#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number, rem;
    int sum = 0;
    cout<<"Enter a number :";
    cin>>number;
    int temp = number;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if(number == sum)
    {
        cout<<number<<" is an armstrong number.";
    }
    else
    {
        cout<<number<<" is not an armstrong number.";
    }


    getch();
}