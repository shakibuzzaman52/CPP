#include <iostream>
#include <conio.h>
//#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;
        // sum = sum * pow(i,2);
    }
    cout<<"Sum is :"<<sum;
    getch();
}