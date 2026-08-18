#include <bits/stdc++.h>
using namespace std;\
void number(int *ptr)
{
    *ptr = 20;
    cout<< *ptr << endl;   // 20
}
int main()
{
    int n = 10;
    number(&n);

    cout<< n << endl;  // 20
    return 0;
}