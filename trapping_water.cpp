#include <bits/stdc++.h>
using namespace std;
void trapWater(int * arr, int n)
{
    int leftMax[1000];
    leftMax[0] = arr[0];
    cout<<leftMax[0];
    for(int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
        cout<<leftMax[i];
    }
    cout << endl;


    int rightMax[1000];
    rightMax[n - 1] = arr[n - 1];
    cout<<rightMax[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], arr[i + 1]);
        cout<<rightMax[i];
    }
    cout << endl;

    int trapWater = 0;
    for(int i = 0; i < n; i++)
    {
        int currentWater = min(leftMax[i], rightMax[i]) - arr[i];
        if(currentWater > trapWater)
        {
            trapWater += currentWater;
        }
    }

    cout<<"Water Trapped = "<<trapWater;

}
int main()
{
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(arr) / sizeof(int);
    trapWater(arr, n);
    return 0;
}