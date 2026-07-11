#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, numOfRows, numOfCol;
    int A[10][10];
    int B[10][10];
    int Add[10][10];
    int subtraction[10][10];

    cout << "Enter a number of rows and cols : ";
    cin >> numOfRows >> numOfCol;

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            cout << "A [" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
        cout << endl;
    }

    cout << endl;

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            cout << "B [" << row << "][" << col << "] = ";
            cin >> B[row][col];
        }
        cout << endl;
    }

    cout << "A = " << endl;

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            cout << A[row][col];
        }
        cout << endl
             << endl;
    }

    cout << "B = " << endl;

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            cout << B[row][col];
        }
        cout << endl;
    }

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            Add[row][col] = A[row][col] + B[row][col];
        }
        cout << endl;
    }

    cout << "Addition is = " << endl;

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            cout << Add[row][col];
        }
        cout << endl;
    }

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            subtraction[row][col] = A[row][col] - B[row][col];
        }
    }
    cout << "Subtraction is = " << endl;
    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < numOfCol; col++)
        {
            cout << subtraction[row][col];
        }
        cout << endl;
    }

    return 0;
}