#include <bits/stdc++.h>
using namespace std;
int number(int a)
{
    int fact = 1;
    for(int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    cout<<fact;
    return fact;
}
int main()
{
    number(4);
    return 0;
}