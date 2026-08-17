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
        decNum = decNum + (last * pow);
        pow = pow * 2;
        n = n / 10;
    }
    cout<<decNum<<endl;
}
void decToBin(int decimal)
{
    int n = decimal;
    int pow = 1;
    int binNum = 0;
    while(n > 0)
    {
        int last = n % 2;
        binNum = binNum + last * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout<<binNum;
}
int main()
{
    binToDec(101);
    decToBin(5);
    return 0;
}