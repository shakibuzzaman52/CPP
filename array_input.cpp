#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nums[5];
    for(int i = 0; i <= 4; i++)
    {
        cout<<"Enter arrays value "<<i<<" :";
        cin>>nums[i];
    }

    for(int i = 0; i <= 4; i++)
    {
        cout<<"Index "<< i<< ":  "<<nums[i]<<endl;
    }


    return 0;
}