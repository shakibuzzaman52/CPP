#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        // Star
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        // Space
        for(int j = 1; j <= 2 * (n - i); j++)
        {
            cout<<" ";
        }

        // Star
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = n; i >= 1; i--)
    {
        // Star
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        // Space
        for(int j = 1; j <= 2 * (n - i); j++)
        {
            cout<<" ";
        }

        // Star
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}