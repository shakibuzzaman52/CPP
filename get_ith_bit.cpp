#include <bits/stdc++.h>
using namespace std;
int ithBit(int n, int i)
{

    int mask = (1<<i);
    if(!(n & mask))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    
    cout<< ithBit(7, 2) << endl; //111 -- 1
    cout<< ithBit(8, 2) << endl; // 1000 --0

    return 0;
}