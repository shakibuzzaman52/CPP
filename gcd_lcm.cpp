#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,rem;
    cout<<"Enter two numbers :";
    cin>>a>>b;

    int n1 = a, n2 = b;
    while(n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    cout<<"GCD is : "<<n1<<endl;
    cout<<"LMC is : "<<(a * b)/n1;


    getch();
}