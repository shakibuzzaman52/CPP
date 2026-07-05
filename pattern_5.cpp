#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, row, col;
    char dublicate_col;
    cout<<"Enter a number :";
    cin>>n;

    for(row = 1; row <= n; row ++)
    {
        for(col = 1; col <= row; col++)
        {
            dublicate_col = col + 64;
            cout<<dublicate_col;
        }
        cout<<endl;
    }
    
    return 0;
}