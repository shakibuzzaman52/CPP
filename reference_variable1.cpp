#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;

    int &b = a;

    b = 30;

    cout<< b << endl; // 30
    cout<< a << endl; // 30
    return 0;
}