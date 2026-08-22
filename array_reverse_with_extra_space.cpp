#include <bits/stdc++.h>
using namespace std;
void printArr(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< array[i] << ", ";
    }
    cout<< endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int arrCopy[n];
    for(int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        arrCopy[i] = arr[j];
    }


    for(int i = 0; i < n; i++)
    {
        arr[i] = arrCopy[i];
    }

    printArr(arr, n);
    return 0;
}