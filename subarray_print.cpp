#include <bits/stdc++.h>
using namespace std;
void subArrPrint(int* ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            // cout<<" ("<<i<<","<<j<<") ";
            for(int k = i; k <= j; k++)
            {
                cout<<ptr[k];
            }
            cout<<", ";
        }
        cout<< endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};


    subArrPrint(arr, 5);

    return 0;
}