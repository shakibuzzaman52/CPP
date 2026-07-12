#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3], row, col, sum = 0, sum1 = 0;;
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
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

    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            if(row < col)
            {
                cout<<A[row][col];
                sum = sum + A[row][col];
            }
            if(row > col)
            {
                cout<<A[row][col];
                sum1 = sum1 + A[row][col];
            }
        }
    }
    cout<<"Sum of upper tringle = "<<sum<<endl;
    cout<<"Sum of lower tringle = "<<sum1;
    
    return 0;
}