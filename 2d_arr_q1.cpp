#include <bits/stdc++.h>
using namespace std;
void searchCount(int arr[][3], int n, int m, int key)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == key)
            {
                count++;
            }
        }
    }

    cout<<count;
}
int main()
{
    int n = 2, m = 3;
    int arr[2][3] = {{4, 7, 8},
                     {8, 8, 7}};

    int key = 7;
    searchCount(arr, n, m, key);
    return 0;
}