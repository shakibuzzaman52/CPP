#include <bits/stdc++.h>
using namespace std;
int binaryNum(int decNum)
{
    int ans = 0, pow = 1;
    while(decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans = ans + rem * pow;
        pow = pow * 10;
    }
    return ans;
}
int main()
{

    for(int i = 1; i <= 10; i++)
    {
        cout<<binaryNum(i)<<endl;
    }
    return 0;
}