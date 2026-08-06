#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numOfRows, numOfCol;
    cin >> numOfRows >> numOfCol;

    int A[numOfRows][numOfCol], B[numOfRows][numOfCol];
    for (int i = 0; i < numOfRows; i++)
    {
        for (int j = 0; j < numOfCol; j++)
        {
            cin >> A[i][j];
        }
    }


    for (int i = 0; i < numOfRows; i++)
    {
        for (int j = 0; j < numOfCol; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "A = ";
    for (int i = 0; i < numOfRows; i++)
    {
        cout << "\t";
        for (int j = 0; j < numOfCol; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }

    cout << "B = ";
    for (int i = 0; i < numOfRows; i++)
    {
        cout << "\t";
        for (int j = 0; j < numOfCol; j++)
        {
            cout << B[i][j];
        }
        cout << endl;
    }




    cout << "Addition = ";
    for (int i = 0; i < numOfRows; i++)
    {
        cout << "\t";
        for (int j = 0; j < numOfCol; j++)
        {
            cout <<A[i][j] + B[i][j];
        }
        cout << endl;
    }

    cout << "Subtraction = ";
    for (int i = 0; i < numOfRows; i++)
    {
        cout << "\t";
        for (int j = 0; j < numOfCol; j++)
        {
            cout <<A[i][j] - B[i][j];
        }
        cout << endl;
    }

    return 0;
}