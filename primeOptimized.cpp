#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    bool isPrime;

    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime = true;
        }
    }

    if(isPrime)
    {
        cout<<"Prime!";
    }
    else
    {
        cout<<"Not Prime!";
    }
    return 0;
}