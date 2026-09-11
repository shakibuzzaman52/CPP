#include <bits/stdc++.h>
using namespace std;
void trappingWater(int * array, int n)
{
    int leftMax[10000];
    leftMax[0] = array[0];
    for(int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], array[i - 1]);
    }

    int rightMax[10000];
    rightMax[n - 1] = array[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], array[i + 1]);
    }

    int waterTrapped = 0;
    for(int i = 0; i < n; i++)
    {
        int currentWater = min(leftMax[i], rightMax[i]) - array[i];
        if(currentWater > waterTrapped)
        {
            waterTrapped += currentWater;
        }
    }
    cout<<"Water Trapped = "<<waterTrapped;
}
int main()
{
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(arr) / sizeof(int);
    trappingWater(arr, n);
    return 0;
}