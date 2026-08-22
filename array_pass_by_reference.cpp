#include <bits/stdc++.h>
using namespace std;
void func(int arr[])
{
    arr[0] = 1000;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    func(array);

    cout<<array[0];  // array always pass by reference


    return 0;
}