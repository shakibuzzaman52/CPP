#include <bits/stdc++.h>
using namespace std;
void subArrSum(int* ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum = sum + ptr[k];
            }
            cout<<sum;
            cout<<", ";
        }
        cout<< endl;
    }
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    subArrSum(arr, 6);

    return 0;
}