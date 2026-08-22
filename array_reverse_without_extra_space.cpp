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

    int start = 0; 
    int end = n - 1;
    while(start < end)
    {
        // swap
        int temp = start;
        start = end;
        end = temp;


        start++;
        end--;
    }

    printArr(arr, n);
    return 0;
}