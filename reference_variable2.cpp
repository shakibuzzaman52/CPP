#include <bits/stdc++.h>
using namespace std;
void change(int &b)
{
    b = 30;
    cout<< b << endl; // 30
}
int main()
{
    int a = 10;

    change(a);

    cout<< a << endl; // 30
    return 0;
}