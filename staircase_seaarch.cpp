#include <bits/stdc++.h>
using namespace std;
void stairCaseSearch(int arr[][4], int n, int key)
{
    // 32 last niyeci
    int row = n - 1;
    int col = 0;

    while(row >= 0 && col < n)
    {
        if(arr[row][col] == key)
        {
            cout<<row<<","<<col;
            return;
        }
        else if(arr[row][col] > key)
        {
            row--;
        }
        else
        {
            col++;
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
    stairCaseSearch(arr, 4, key);
    return 0;
}