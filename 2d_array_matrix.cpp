#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    int A[3][3];

    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            cout<<"A ["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col];
        }
        cout<<endl;
    }

    cout<<"A = "<<endl;

    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            cout<<A[row][col];
        }
        cout<<endl;
    }


    return 0;
}