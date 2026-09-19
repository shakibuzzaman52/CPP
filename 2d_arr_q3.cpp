#include <bits/stdc++.h>
using namespace std;
void transpose(int arr[][3], int n, int m)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<arr[j][i] << " ";
        }
        cout<<endl;
    }
}
int main()
{
    int nums[2][3] = { {1,4,9},
                       {11,4,3} };
    transpose(nums, 2, 3);
    return 0;
}