#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first = 2, second = 1;
    for(int i = 0; i < n; i++)
    {
        cout<<first<<" ";
        
        int lucas = first + second;
        first = second;
        second = lucas;
    }
    return 0;
}