#include <bits/stdc++.h>
using namespace std;
void searchArr(int arr[][4], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = 3;
        while(start <= end)
        {
            int mid = (start + end)/2;
            if(arr[i][mid] == key)
            {
                cout<<i<<","<<mid;
                return;
            }
            else if(arr[i][mid] < key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout<<"Not found!";
}
int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    int key = 33;
    searchArr(arr, 4, key);
    return 0;
}