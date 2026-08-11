#include <bits/stdc++.h>
using namespace std;

int x = 20; // global variable

int main()
{
    int x = 10;
    cout<<x<<endl;  // Local variable value print

    cout<<::x<<endl; // Global variable value print

    ::x = 50; // Global variable value changed
    cout<<::x<<endl; // New global variable value print

    return 0;
}