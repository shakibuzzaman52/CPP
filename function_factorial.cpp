// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int n)
// {
//     int fact = 1;
//     for(int i = n; i >= 1; i--)
//     {
//         fact = fact * i;
//     }

//     return fact;
// }
// int main()
// {
//     cout<<factorial(5);
//     return 0;
// }


// Different way--------------

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int factorial = fact(4);
    cout<<factorial;
    return 0;
}