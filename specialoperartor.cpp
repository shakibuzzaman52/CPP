#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    double b;
    float c;
    char ch;
    char name[20];

    //sizeof operator
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(name)<<endl;

    //comma operator
    int x,y,sum;
    sum = (x = 20, y = 30, sum = x + y);
    cout<<sum;


    getch();
}