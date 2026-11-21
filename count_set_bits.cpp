#include <bits/stdc++.h>
using namespace std;
void countSetBit(int n)
{
    int count = 0;
    while(n > 0)
    {
        int lastBit = (n & 1);
        count = count + lastBit;

        n = (n >> 1);
    }

    cout<< count;
}
int main()
{
    countSetBit(7);
    return 0;
}