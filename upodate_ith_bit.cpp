#include <bits/stdc++.h>
using namespace std;
void updateIthBit(int n, int i, int val)
{
    n = (n & (~(1 << i))); // clear ith position
    n = (n | (val << i));
    cout<< n << endl;
}
int main()
{
    updateIthBit(7, 2, 0);
    return 0;
}