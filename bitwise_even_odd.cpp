#include <bits/stdc++.h>
using namespace std;
void evenOrOdd(int n)
{
    if(!(n&1))
    {
        cout<<"Even" << endl;
    }
    else
    {
        cout<<"Odd" << endl;
    }
}
int main()
{
    evenOrOdd(7);
    evenOrOdd(8);

    return 0;
}