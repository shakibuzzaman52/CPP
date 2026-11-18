#include <bits/stdc++.h>
using namespace std;
int* func()
{
    int * ptr = new int;

    *ptr = 1200;
    cout<<"ptr point to " << *ptr << endl;

    return ptr;
}
int main()
{
    int * x = func();
    cout<< *x;
    return 0;
}