#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 0, second = 1;

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        
        int fibo = first + second;
        first = second;
        second = fibo;
    }

    return 0;
}