// 1 * 2 * 3 ... + n
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int multiplication = 1;

    for (int i = 1; i <= n; i++)
    {
        multiplication = multiplication * i;
    }
    cout << "Multiplication is :" << multiplication;

    getch();
}