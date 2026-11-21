#include <bits/stdc++.h>
using namespace std;
void clearIdx(int n, int i, int j)
{

    int a = (~0) << j+1;
    int b = (1 << i) - 1;
    int bitMask = (a|b);
    
    cout<< bitMask << endl;
    cout<< (n & bitMask);
}
int main()
{
    clearIdx(15, 1, 3); // 1111 - 0001
    return 0;
}