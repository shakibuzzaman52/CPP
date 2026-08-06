#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin>>row>>col;
    int A[10][10];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>>A[i][j];
        }
    }
    int transpose[10][10];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            cout<<transpose[i][j];
        }
    }
    return 0;
}