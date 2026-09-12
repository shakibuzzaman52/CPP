#include <bits/stdc++.h>
using namespace std;
void maxSubArrProduct(int * arr, int n)
{
    int maxProduct = arr[0];
    for(int i = 0; i < n; i++)
    {
        int CurrentProduct = 1;
        for(int j = i; j < n; j++)
        {
            CurrentProduct = CurrentProduct * arr[j];
            maxProduct = max(CurrentProduct, maxProduct);
        }

    }
    cout<<"Max Product = "<<maxProduct;
}
int main()
{
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(int);
    maxSubArrProduct(arr, n);
    return 0;
}