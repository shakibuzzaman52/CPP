#include <bits/stdc++.h>
using namespace std;
int number(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int bioCoefficient(int n, int r)
{
    int vol1 = number(n);
    int vol2 = number(r);
    int vol3 = number(n - r);

    int result = vol1 / (vol2 * vol3);
    return result;
}

int main()
{
    cout<<bioCoefficient(4, 2);
    return 0;
}