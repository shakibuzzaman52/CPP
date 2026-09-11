#include <bits/stdc++.h>
using namespace std;
void maxProfit(int * arr, int n)
{
    int maxProfit = INT_MIN;
    for(int buy = 0; buy < n - 1; buy++)
    {
        for(int sell = buy + 1; sell < n; sell++)
        {
            int profit = arr[sell] - arr[buy];
            // maxProfit = max(maxProfit, profit);
            if(profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        
        cout<< endl;
    }
    cout<<"Max profit = "<<maxProfit;
}
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);

    maxProfit(arr, n);

    return 0;
}