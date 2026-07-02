#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter last even number : ";
    cin>>n;

    int sum = 0;
    for(int i = 2; i <= n; i += 2)
    {
        sum = sum + i;
    }
    cout<<"Sum of even number is :"<<sum;

    getch();
}