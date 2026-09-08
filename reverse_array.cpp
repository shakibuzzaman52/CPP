// #include <bits/stdc++.h>
// using namespace std;
// void arrReverse(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
// }
// int main()
// {
    
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);
//     int arrCopy[n];
//     for(int i = 0; i < n; i++)
//     {
//         int j = n - 1 - i;
//         arrCopy[i] = arr[j];
//     }

//     for(int i = 0; i < n; i++)
//     {
//         arr[i] = arrCopy[i];
//     }

//     arrReverse(arr, n);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void reverseArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
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

    reverseArr(arr, n);

    return 0;
}