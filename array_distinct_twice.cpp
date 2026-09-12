#include <bits/stdc++.h>
using namespace std;
void check(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout<<"True";
                return;
            }
        }
    }
    cout<<"False";

}
int main()
{
    int arr[] = {1,1,1,3,3,4,3,2,4,2}; // 1,1,1,3,3,4,3,2,4,2
    int n = sizeof(arr) / sizeof(int);
    check(arr, n);
    return 0;
}