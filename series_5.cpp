//1-2+3-4+5-6......n
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum_of_even = 0;
    int sum_of_odd = 0;
    int ans;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum_of_even = sum_of_even + i;
        }
        else
        {
            sum_of_odd = sum_of_odd + i;
        }
    }

    ans = sum_of_odd - sum_of_even;

    cout << "Ans is : " << ans;

    getch();
}