#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Increase
    int a = 10;
    int * ptr = &a;
    cout<<ptr  << endl;

    cout<<ptr++ << endl;  // 4 bytes add for int

    cout<<ptr-- << endl; // 4 bytes decrease for int

    cout<<ptr + 3 << endl;  // 3*4 bytes add for int

    cout<<ptr - 3<< endl; // 3*4 bytes decrease for int


    return 0;
}