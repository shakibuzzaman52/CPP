#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool isPrime2(int n)
{
    if(n < 2)
    {
        return false;
    }

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << isPrime(9) << endl;
    cout << isPrime2(7);

    return 0;
}