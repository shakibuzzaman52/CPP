#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;
    cout<<&x<<" = "<<ptr<<"\n";
    cout<<&ptr<<" = "<<pptr;
    return 0;
}