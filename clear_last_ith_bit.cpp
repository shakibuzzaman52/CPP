#include <bits/stdc++.h>
using namespace std;
void clear_last_Ith_bit(int n, int i)
{
    int bitMask = (~0) << i;
    n = n & bitMask;
    cout<< n;
}
int main()
{
    clear_last_Ith_bit(15, 2);
    return 0;
}