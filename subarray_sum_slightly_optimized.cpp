#include <bits/stdc++.h>
using namespace std;
void subarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum = currentSum + arr[j];
            maxSum = max(maxSum, currentSum);
            minSum = min(minSum, currentSum);
        }
        cout << currentSum;
        cout << endl;
    }
    cout << "Max Sum is : " << maxSum << endl;
    cout << "Min Sum is : " << minSum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    subarraySum(arr, n);

    return 0;
}