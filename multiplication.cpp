#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;

    for(int i = 1; i <= 10; i++)
    {
        cout<<number<<" * "<<i<<" = "<<number * i<<endl;
    }


    getch();
}