#include <bits/stdc++.h>
using namespace std;
void stairCaseSearchArr(int arr[][4], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while(end >= 0 && start < n)
    {
        if(arr[start][end] == key)
        {
            cout<<start <<","<< end;
            return;
        }
        else if(arr[start][end] < key)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    cout<<"Not Found!";

}
int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    int key = 33;
    stairCaseSearchArr(arr, 4, key);
    return 0;
}