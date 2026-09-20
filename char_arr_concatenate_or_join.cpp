#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100] = "abc";
    char str2[100] = "xyz";

    strcat(str1, str2);
    cout<< str1;    // abcxyz
    return 0;
}