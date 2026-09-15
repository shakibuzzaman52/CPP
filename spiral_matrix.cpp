#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 4, n = 4;
    int arr[m][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int srow = 0, scol = 0;
    int erow = m - 1, ecol = n - 1;

    while (srow <= erow && scol <= ecol)
    {
        for (int top = scol; top <= ecol; top++)
        {
            cout << arr[srow][top]; // Top
        }

        for (int right = srow + 1; right <= erow; right++)
        {
            cout << arr[right][ecol]; // Right
        }

        for (int bottom = ecol - 1; bottom >= scol; bottom--)
        {
            if(srow == erow)
            {
                break;
            }
            cout << arr[erow][bottom]; // Bottom
        }

        for (int left = erow - 1; left >= srow + 1; left--)
        {
            if(scol == ecol)
            {
                break;
            }
            cout << arr[left][scol]; // Left
        }

        srow++;
        ecol--;
        erow--;
        scol++;
    }

    return 0;
}