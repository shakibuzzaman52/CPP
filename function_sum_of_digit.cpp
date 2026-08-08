#include <bits/stdc++.h>
using namespace std;
int sumOfDigit(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        sum = sum + lastDigit;
    }
    return sum;
}
int main()
{
    cout<<sumOfDigit(2356);
    return 0;
}