#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;

    cout<<&x<<endl;
    cout<< *&x << endl; // Deference operator

    int *ptr = &x;

    cout << ptr << endl;
    cout << *ptr << endl;  // Deference operator
    return 0;
}