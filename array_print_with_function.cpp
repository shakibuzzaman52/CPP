#include <bits/stdc++.h>
using namespace std;
void func(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<array[i] << ", ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    func(arr, n);

    return 0;
}