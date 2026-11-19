#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr = {2, 7, 11, 15};
    int target = 12;


    bool found = false;
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<i <<" , "<< j;
                found = true;
                break;
            }
            else
            {
                found = false;
            }
        }
    }

    if(found)
    {
        cout<< "Found";

    }
    else
    {
        cout<< "Not found";
    }
    return 0;
}