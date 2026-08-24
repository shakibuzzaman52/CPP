#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int* arr, int n)
{
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            int currentSum = 0;
            for(int i = start; i <= end; i++)
            {
                currentSum = currentSum + arr[i];
            }
            cout<<currentSum << ", ";
            maxSum = max(maxSum, currentSum);
        }
        cout<<endl;
    }
    cout<<"Max Subarray Sum is : "<< maxSum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = 6;

    maxSubarraySum(arr, n);
    return 0;
}