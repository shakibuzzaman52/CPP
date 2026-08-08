#include <bits/stdc++.h>
using namespace std;

int factOfNumber(int number)
{
    int factorial = 1;

    for(int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int nCr(int n, int r)
{
    int fact_n = factOfNumber(n);
    int fact_r = factOfNumber(r);
    int fact_nmr = factOfNumber(n-r);

    int nCr = fact_n / (fact_r * fact_nmr);

    return nCr;
}

int main()
{
    cout<<nCr(8, 2);
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int factOfNumber(int number)
// {
//     int factorial = 1;

//     for(int i = 1; i <= number; i++)
//     {
//         factorial = factorial * i;
//     }

//     return factorial;
// }

// int main()
// {
//     int n = 8;
//     int r = 2;

//     int nCr = factOfNumber(n) / (factOfNumber(r) * factOfNumber(n - r));

//     cout << nCr;

//     return 0;
// }