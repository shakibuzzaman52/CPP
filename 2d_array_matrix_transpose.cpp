#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row1, col1, numOfRow, numOfCol;
    int A[10][10], transpose[10][10];

    cout << "Enter number of rows and cols :";
    cin >> numOfRow >> numOfCol;

    for (row1 = 0; row1 < numOfRow; row1++)
    {
        for (col1 = 0; col1 < numOfCol; col1++)
        {
            cout << "A[" << row1 << "][" << col1 << "] = ";
            cin >> A[row1][col1];
        }
        cout << endl;
    }

    cout << "A = " << endl;
    for (row1 = 0; row1 < numOfRow; row1++)
    {
        for (col1 = 0; col1 < numOfCol; col1++)
        {
            cout << A[row1][col1];
        }
        cout << endl;
    }

    for (row1 = 0; row1 < numOfRow; row1++)
    {
        for (col1 = 0; col1 < numOfCol; col1++)
        {
            transpose[col1][row1] = A[row1][col1];
        }
        cout << endl;
    }

    cout << "Transpose = " << endl;
    for (row1 = 0; row1 < numOfCol; row1++)
    {
        for (col1 = 0; col1 < numOfRow; col1++)
        {
            cout << transpose[row1][col1];
        }
        cout << endl;
    }

    return 0;
}