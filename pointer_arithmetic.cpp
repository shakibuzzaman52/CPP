#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Increase
    int a = 10;
    int * ptr = &a;
    cout<<ptr  << endl;

    ptr++; // 4 bytes add for int
    cout<<ptr << endl;

    ptr--; // 4 bytes add for int
    cout<<ptr << endl;


    return 0;
}