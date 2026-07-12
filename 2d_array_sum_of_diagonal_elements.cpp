#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3], row, col, sum = 0, sum1 = 0;
    cout << "Enter the elements of matrix A :" << endl;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
        cout << endl;
    }

    cout << "A = " << endl;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << A[row][col];
        }
        cout << endl;
    }

    for (row = 0; row < 3; row++)
    {
       for (col = 0; col < 3; col++)
        {
            if (row == col)
            {
                sum = sum + A[row][col];
            }
        }
    } 
    cout <<"Sum of main diagonal elements = "<<sum<< endl;

    for (row = 0; row < 3; row++)
    {
       for (col = 0; col < 3; col++)
        {
            if (row + col == 2)
            {
                sum1 = sum1 + A[row][col];
            }
        }
    }
    cout <<"Sum of secondary diagonal elements = "<<sum1<< endl;

    cout<<"Total sum of diagonal elements is = "<<sum + sum1;



    return 0;
}