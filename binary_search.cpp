#include <bits/stdc++.h>
using namespace std;
int binSearch(int array[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == array[mid])
        {
            return mid;
        }
        else if (key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int key = 4;
    int n = sizeof(arr) / sizeof(int);

    cout << binSearch(arr, n, key);
    return 0;
}