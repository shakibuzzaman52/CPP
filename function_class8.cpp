#include <bits/stdc++.h>
using namespace std;
void sum(int a, int b)
{
    int add = a + b;
    cout<<add<<endl;
}
void sum(int a, int b, int c)
{
    int add = a + b + c;
    cout<<add<<endl;
}
int main()
{
    sum(10, 20);
    sum(40, 50, 60);
    return 0;
}