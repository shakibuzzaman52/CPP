#include <bits/stdc++.h>
using namespace std;
bool isSort(int * arr, int n, int i)
{
    if(i == n - 1)
    {
        return true;
    }

    if(arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSort(arr, n, i + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout<< isSort(arr, 5, 0);
    return 0;
}