#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float num;
    cout<<"Enter a number :";
    cin>>num;


    if(num >= 33)
    {
        cout<<"You passed the exam.";
    }

    else{
        cout<<"You failed the exam.";
    }


    getch();
}