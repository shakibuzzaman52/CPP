#include <bits/stdc++.h>
using namespace std;
void searchArr(int arr[][4], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == key)
            {
                cout<<"("<<i<<","<<j<<")";
                break;
            }
        }
    }
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