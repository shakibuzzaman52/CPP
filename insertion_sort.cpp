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
        int current = arr[i];
        int previous = i - 1;
        while(previous >= 0 && arr[previous] > current)
        {
            swap(arr[previous], arr[previous + 1]);
            previous--;
        }
        arr[previous + 1] = current;
    }
    print(arr, n);
}
int main()
{
    int arr[] = {5, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    return 0;
}