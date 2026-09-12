#include <bits/stdc++.h>
using namespace std;
void binSearch(int *arr, int n)
{
    int target = 9;

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if(target == arr[mid])
        {
            cout<<mid;
            return;
        }
        else if(target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout<<-1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    binSearch(arr, n);
    return 0;
}