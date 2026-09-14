#include <bits/stdc++.h>
using namespace std;
void print(int * arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i] << ", ";
    }
}
void bubleSort(int * arr, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    print(arr, n);
}
int main()
{
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    bubleSort(arr, n);
    return 0;
}