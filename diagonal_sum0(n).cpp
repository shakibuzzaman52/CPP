#include <bits/stdc++.h>
using namespace std;
void diagonalSum(int matrix[][3], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
        if(i != n - i - 1)
        {
            sum += matrix[i][n - i -1];
        }
    }
    cout<<sum;
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    diagonalSum(arr, 3);
    return 0;
}