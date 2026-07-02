#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number, temp, rem;
    int sum = 0;
    cout<<"Enter a number :";
    cin>>number;
    temp = number;



    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    if(number == sum)
    {
        cout<<number<<" is a pelindrome.";
    }
    else
    {
        cout<<number<<" is not a pelindrome.";
    }




    getch();
}