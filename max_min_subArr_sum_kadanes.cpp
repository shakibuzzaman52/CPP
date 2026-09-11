#include <bits/stdc++.h>
using namespace std;
void maxSubArrSum(int * arr, int n)
{
    int maxSum = INT_MIN;
    int curSum = 0;
    for(int i = 0; i < n; i++)
    {
        curSum = curSum + arr[i];
        maxSum = max(maxSum, curSum);
        if(curSum < 0)
        {
            curSum = 0;
        }

    }
    cout<<"Max Sum = "<< maxSum << endl;
}

void minSubArrSum(int * arr, int n)
{
    int minSum = INT_MAX;
    int curSum = 0;
    for(int i = 0; i < n; i++)
    {
        curSum += arr[i];
        minSum = min(minSum, curSum);
        if(curSum > 0)
        {
            curSum = 0;
        }
    }
    cout<<"Min Sum = "<<minSum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    maxSubArrSum(arr, 6);
    minSubArrSum(arr, 6);
    return 0;
}