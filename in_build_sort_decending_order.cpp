#include <bits/stdc++.h>
using namespace std;
void print(int * arr, int n)
{
    for(int i = 0; i< n; i++)
    {
        cout<<arr[i] << " ";
    }
}
int main()
{
    int arr[] = {6, 4, 5, 1, 7, 2, 8, 0};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n, greater<int>());
    print(arr, n);
    return 0;
}