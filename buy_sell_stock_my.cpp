#include <bits/stdc++.h>
using namespace std;
void maxProfit(int * arr, int n)
{
    int maxProfit = INT_MIN;
    for(int i = 0; i < n-1; i++)
    {
        int profit = arr[i+1] - arr[i];
        maxProfit = max(maxProfit, profit);
    }
    cout<<"Max Profit = "<< maxProfit;
}
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);

    maxProfit(arr, n);
 
    return 0;
}