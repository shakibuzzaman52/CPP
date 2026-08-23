#include <bits/stdc++.h>
using namespace std;
void printMax(int* array, int n)
{
    int max = array[0];

    for(int i = 0; i < n; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    cout<< "Max num is : " << max << endl;
}

void printMin(int* array, int n)
{
    int min = array[0];

    for(int i = 0; i < n; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    cout<< "Min num is : " << min;
}
int main()
{
    int arr[] = {3, 5, 1, 8, 65, 4};
    int n = sizeof(arr) / sizeof(int);

    printMax(arr, n);
    printMin(arr, n);
    return 0;
}