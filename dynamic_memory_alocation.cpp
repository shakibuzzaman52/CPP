#include <bits/stdc++.h>
using namespace std;

void funcint()
{
    int * ptr = new int;
    *ptr = 5;
    cout<< *ptr;

    delete ptr;
}

void func()
{
    int n;
    cin>>n;

    int * ptr = new int[n];

    int count = 1;
    for(int i = 0; i < n; i++)
    {
        ptr[i] = count;
        cout<< ptr[i] << " ";
        count++;
    }

    delete [] ptr;
}
int main()
{
    funcint();
    func();
    return 0;
}


