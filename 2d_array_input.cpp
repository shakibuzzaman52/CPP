#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, A[2][3];

    cout<<"Enter the elements for the matrix :"<<endl;
    for(row = 0; row < 2; row++)
    {
        for(col = 0; col < 3; col++)
        {
            cout<<"A ["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col];
        }
    }

    cout<<"The matrix is : "<<endl;
    for(row = 0; row < 2; row++)
    {
        for(col = 0; col < 3; col++)
        {
            cout<<"A ["<<row<<"]["<<col<<"] = ";
            cout<<A[row][col]<<" "<<endl;
        }
    }
    
    return 0;
}