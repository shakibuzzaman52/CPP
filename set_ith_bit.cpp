#include <bits/stdc++.h>
using namespace std;
int setIthBit(int n, int i)
{
    int bitmask = ( 1 << i);

    return (n | bitmask);
}
int main()
{
    cout<< setIthBit(7, 3) << endl; // 1111 -- 15
    return 0;
}