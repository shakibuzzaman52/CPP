#include <bits/stdc++.h>
using namespace std;
void subarraySum(int* arr, int n)
{
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
    int currentSum = 0;
    for(int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        maxSum = max(maxSum, currentSum);
        minSum = min(minSum, currentSum);
        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }

    cout<< maxSum << endl;
}

void subarraySum1(int* arr, int n)
{
    int minSum = INT_MAX;
    int currentSum = 0;
    for(int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        minSum = min(minSum, currentSum);
        if(currentSum > 0)
        {
            currentSum = 0;
        }
    }

    cout<< minSum << endl;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    subarraySum(arr, n);
    subarraySum1(arr, n);

    return 0;
}