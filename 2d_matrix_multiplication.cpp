#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, numOfRowsA, numOfColsA, numOfRowsB, numOfColsB;
    int A[10][10], B[10][10], multiplication[10][10];
    int sum = 0, k;

    cout << "Enter number of rows and cols for A matrix:";
    cin >> numOfRowsA >> numOfColsA;

    cout << "Enter number of rows and cols for B matrix:";
    cin >> numOfRowsB >> numOfColsB;

    while (numOfColsA != numOfRowsB)
    {
        cout << "Error" << endl;
        cout << "Enter number of rows and cols for A matrix:";
        cin >> numOfRowsA >> numOfColsA;

        cout << "Enter number of rows and cols for B matrix:";
        cin >> numOfRowsB >> numOfColsB;
    }

    cout << "Enter the element of A matrix :" << endl;
    for (row = 0; row < numOfRowsA; row++)
    {
        for (col = 0; col < numOfColsA; col++)
        {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
        cout << endl;
    }

    cout << "Enter the element of B matrix :" << endl;
    for (row = 0; row < numOfRowsB; row++)
    {
        for (col = 0; col < numOfColsB; col++)
        {
            cout << "B[" << row << "][" << col << "] = ";
            cin >> B[row][col];
        }
        cout << endl;
    }

    cout << "A = " << endl;
    for (row = 0; row < numOfRowsA; row++)
    {
        for (col = 0; col < numOfColsA; col++)
        {
            cout << A[row][col];
        }
        cout << endl;
    }
    cout << endl;

    cout << "B = " << endl;
    for (row = 0; row < numOfRowsB; row++)
    {
        for (col = 0; col < numOfColsB; col++)
        {
            cout << B[row][col];
        }
        cout << endl;
    }

    for (row = 0; row < numOfRowsA; row++)
    {
        for (col = 0; col < numOfColsB; col++)
        {
            for (k = 0; k < numOfColsA; k++)
            {
                sum = sum + A[row][k] * B[k][col];
            }

            multiplication[row][col] = sum;
            sum = 0;
        }
    }


    cout << endl;
    cout << "Multiplication is  = " << endl;
    for (row = 0; row < numOfRowsA; row++)
    {
        for (col = 0; col < numOfColsB; col++)
        {
            cout << multiplication[row][col];
        }
        cout << endl;
    }


    return 0;
}