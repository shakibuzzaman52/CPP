#include <bits/stdc++.h>
using namespace std;
bool pow_of_2(int n)
{
    if(!(n & (n - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int n;
    cin>> n;
    cout<< pow_of_2(n);
    return 0;
}