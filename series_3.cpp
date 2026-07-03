//1^2 + 2^2 +....+ n^2 
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float n;
    cout<<"Enter a number :";
    cin>>n;
    float sum = 0;

    for(float i = 1; i <= n; i++)
    {
        sum = sum + (1/i);
    }
    cout<<"Sum is :"<<sum;

    getch();
}