#include <bits/stdc++.h>
using namespace std;
int fastExpo(int x, int n)
{
    int ans = 1;
    while(n > 0)
    {
        int lastBit = n & 1;

        if(lastBit == 1)
        {
            ans = ans * x;
        }

        x = x * x;
        n = n >> 1;
    }

    cout<< ans << endl;
    return ans;
}
int main()
{
    fastExpo(3, 4);
    return 0;
}