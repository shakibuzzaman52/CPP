#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr = {1, 2, 2, 4};

    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            cout<< arr[i] << ",";
        }
        
    }

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] + 1 < arr[i + 1])
        {
            cout<< arr[i] + 1;
            break;
        }
    }
    return 0;
}