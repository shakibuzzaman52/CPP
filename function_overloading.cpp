#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int sum(double a, double b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout<<sum(10, 20)<<endl;
    cout<<sum(1.5, 2.5)<<endl;
    cout<<sum(10, 20, 30)<<endl;
    return 0;
}