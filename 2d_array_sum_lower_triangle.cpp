#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin>>row>>col;
    int A[10][10];
    int sum = 0;


    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i = 0; i > row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i < j)
            {
                sum = sum + A[i][j];
            }
        }
    }

    return 0;
}