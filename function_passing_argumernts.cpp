// #include <bits/stdc++.h>
// using namespace std;

// void display(int num)
// {
//     num = 20;
// }

// int main()
// {
//     int x = 10;
//     display(x);    
//     cout<<x;    // pass by value ... x = 10 No changed
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void display(int *num)
{
    *num = 20;
}

int main()
{
    int x = 10;
    display(&x);    
    cout<<x;    // pass by reference   .... x = 20
    return 0;
}