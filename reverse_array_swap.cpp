#include <bits/stdc++.h>
using namespace std;

void reverse(int array[],  int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<array[i];
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 9, 2};
    int start = 0;
    int end = 4;

    while (start <= end)
    {
        swap(arr[start], arr[end]);

        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        start++;
        end--;

    }

    reverse(arr, 5);
        


    return 0;
}