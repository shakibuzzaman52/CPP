#include <bits/stdc++.h>
using namespace std;
void maxSubArrSum(int *ptr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int curSum = 0;
            for (int k = i; k <= j; k++)
            {
                curSum += ptr[k];
            }
            cout << curSum << ", ";
            maxSum = max(maxSum, curSum);
        }
        cout << endl;
    }
    cout << "Maximum Sum = " << maxSum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    maxSubArrSum(arr, 6);
    return 0;
}