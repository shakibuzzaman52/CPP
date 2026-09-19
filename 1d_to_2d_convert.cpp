#include <bits/stdc++.h>
using namespace std;
void convert(int *arr, int k, int n, int m)
{
    if (n * m == k)
    {
        int matrix[n][m];
        k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[i][j] = arr[k];
                k++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "Not possible !";
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int n = 2, m = 2;
    convert(arr, 4, n, m);
    return 0;
}