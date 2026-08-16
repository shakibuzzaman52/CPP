// #include <bits/stdc++.h>
// using namespace std;
// void number(int a)
// {
//     if(a % 2 == 0)
//     {
//         cout<<"Even";
//     }
//     else
//     {
//         cout<<"Odd";
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     number(n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool isEven(int a)
{
    if(a % 2 == 0)
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
    cout<<isEven(20);
    return 0;
}