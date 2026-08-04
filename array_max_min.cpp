#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter student number : ";
    cin>>n;
    int student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
    }

    
    // Max
    int max = student[0];
    for( int i = 1; i < n; i++)
    {
        if(max < student[i])
        {
            max = student[i];
        }
    }
    cout<<max<<endl;


    // Min
    int min = student[0];
    for(int i = 1; i < n; i++)
    {
        if(min > student[i])
        {
            min = student[i];
        }
    }
    cout<<min<<endl;



    return 0;
}