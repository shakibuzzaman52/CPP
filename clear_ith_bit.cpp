#include <bits/stdc++.h>
using namespace std;
int clearIthBit(int n, int i)
{
    int bitMask = ~(1 << i);
    return (n & bitMask);
    
}
int main()
{
    cout<< clearIthBit(6, 1) << endl; // 110 & 101 = 100 -- 4
    return 0;
}