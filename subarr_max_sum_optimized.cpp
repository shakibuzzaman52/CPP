#include <bits/stdc++.h>
using namespace std;
void subArrSum(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            maxSum = max(maxSum, sum);
        }
        cout << sum;
        cout << endl;
    }
    cout << "Max Sum = " << maxSum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    subArrSum(arr, 6);

    return 0;
}