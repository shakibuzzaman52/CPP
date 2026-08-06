#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    int A[10][10], B[10][10];

    cin >> r1 >> c1 >> r2 >> c2;
    while (c1 != r2)
    {
        cin >> r1 >> c1 >> r2 >> c2;
    }

    
    // A & B Matrix input
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }



    // Multiplication
    int multiplication[10][10];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            multiplication[i][j] = sum;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << multiplication[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}