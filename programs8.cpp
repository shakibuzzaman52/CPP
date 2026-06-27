#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double c,f;
    cout<<"Enter Celcious temperature:";
    cin>>c;

    f = 9*(c/5)+32;

    cout<<"Fahrenheit temperature is :"<<f;

    getch();
}