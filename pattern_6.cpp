#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, row, col;
    char dublicate_row;
    cout<<"Enter a number :";
    cin>>n;

    for(row = 1; row <= n; row ++)
    {
        for(col = 1; col <= row; col++)
        {
            dublicate_row = row + 64;
            cout<<dublicate_row;
        }
        cout<<endl;
    }
    
    return 0;
}