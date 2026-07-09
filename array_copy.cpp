#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array1[5] = {2, 4, 8, 5, 9}, array2[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Array 1 is :" << array1[i] << endl;
    }

    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        array2[i] = array1[i];
        cout << "Array 2 is :" << array2[i] << endl;
    }
    return 0;
}