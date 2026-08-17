#include <bits/stdc++.h>
using namespace std;
void binToDec(int binary)
{
    int n = binary;

    int pow = 1;
    int decNum = 0;
    while(n > 0)
    {
        int last = n % 10;
        decNum = decNum + last * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout<<decNum;
}
int main()
{
    binToDec(101);
    return 0;
}