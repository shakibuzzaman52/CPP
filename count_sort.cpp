#include <bits/stdc++.h>
using namespace std;
void print(int * arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}
void countSort(int *arr, int n)
{
    int minValue = INT_MAX, maxValue = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }

    int freq[10000] = {0};

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int j = 0;
    for(int i = minValue; i <= maxValue; i++)
    {
        while(freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    
    print(arr, n);
}
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    countSort(arr, n);
    return 0;
}