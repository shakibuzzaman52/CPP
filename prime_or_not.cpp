#include <bits/stdc++.h>
using namespace std;
// int number(int a)
// {
//     int fact = 1;
//     for(int i = 1; i <= a; i++)
//     {
//         fact = fact * i;
//     }
//     cout<<fact;
//     return fact;
// }

bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i = 2; i < n; i++)
    {
        if(n % i != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
int main()
{
    cout<<isPrime(7);
    return 0;
}