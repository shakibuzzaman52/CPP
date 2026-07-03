//1^2 X 2^2 X 3^2 X.... X n^2
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number :";
    cin >> n;
    int multiplication = 1;

    for(int i = 1; i <= n; i++)
    {
        multiplication = multiplication * (i * i);
    }
    cout<<"Multiplication is :"<<multiplication;
    
    getch();
}