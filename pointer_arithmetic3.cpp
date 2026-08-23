#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 23, 3, 4, 53, 55};
    int* ptr1 = arr;
    int* ptr2 = ptr1 + 3;

    cout<<(ptr2 > ptr1) << endl; // 1
    cout<<(ptr1 == arr) << endl; // 1
    cout<<(ptr1 > ptr2) << endl; // 0

    return 0;
}