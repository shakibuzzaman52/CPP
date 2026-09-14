#include <bits/stdc++.h>
using namespace std;
void print(int * arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}
void insertionSort(int * arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int cur = arr[i];
        int pre = i - 1;
        while(pre >= 0 && arr[pre] > cur)
        {
            swap(arr[pre], arr[pre + 1]);
            pre--;
        }
    }
    print(arr, n);
}
int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    return 0;
}