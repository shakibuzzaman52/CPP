#include <bits/stdc++.h>
using namespace std;
void subarrayMinSum(int* arr, int n)
{
    int minSum = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int currentSum = 0;
            for(int k = i; k <= j; k++)
            {
                currentSum = currentSum + arr[k];
            }
            cout<<currentSum<<", ";
            minSum = min(minSum, currentSum);

        }
        cout<<endl;
    }
    cout<<"Subarray Min Sum : "<< minSum;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    subarrayMinSum(arr, n);

    return 0;
}