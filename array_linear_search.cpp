#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num[] = {14, 34, 15, 19, 53};
    int value;
    cout<<"Enter a value that you want to searched :";
    cin>>value;
    int position = -1;
    for(int i = 0; i < 5; i++)
    {
        if(value == num[i])
        {
            position = i + 1;
            break;
        }
    }
    if(position == -1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found in "<<position<<" position.";
    }
    return 0;
}