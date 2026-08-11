#include <bits/stdc++.h>
using namespace std;

int decNum(int binaryNum)
{
    int ans = 0; 
    int pow = 1;
    while(binaryNum > 0)
    {
        int rem = binaryNum % 10;
        binaryNum = binaryNum / 10;
        ans = ans + rem * pow;
        pow = pow * 2;
    }
    return ans;
}
int main()
{
    int binaryNum = 1010;
    cout<<decNum(binaryNum);
    return 0;
}