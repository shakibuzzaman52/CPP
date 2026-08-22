#include <bits/stdc++.h>
using namespace std;
int linearSearch(int array[],int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr, n, 5);
    
    return 0;
}