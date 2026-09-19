#include <bits/stdc++.h>
using namespace std;
void sum(int arr[][3], int n, int m)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[1][i];
    }
    cout<<sum;
}
int main()
{
    int nums[3][3] = { {1,4,9}, {11,4,3}, {2,2,3} };
    sum(nums, 3, 3);

    return 0;
}