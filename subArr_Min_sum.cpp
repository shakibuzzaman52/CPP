#include <bits/stdc++.h>
using namespace std;
void minSubArrSum(int* ptr , int n)
{
    int minSum = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int curSum = 0;
            for(int k = i; k <= j; k++)
            {
                curSum += ptr[k]; 
            }
            minSum = min(minSum, curSum);
        }
    }
    cout<<"Min Sum = "<< minSum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};

    minSubArrSum(arr, 6);
    return 0;
}