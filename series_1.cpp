// 1 + 2 + 3 + 4 ...... + n
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter last number :";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is : " << sum;

    getch();
}