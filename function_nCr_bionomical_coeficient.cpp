#include <bits/stdc++.h>
using namespace std;

int factOfNumber(int number)
{
    int factorial = 1;

    for(int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{
    int n = 8;
    int r = 2;

    int nCr = factOfNumber(n) / (factOfNumber(r) * factOfNumber(n - r));

    cout << nCr;

    return 0;
}