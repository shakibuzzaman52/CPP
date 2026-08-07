#include <bits/stdc++.h>
using namespace std;
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
    subtraction(10, 20);
    multiplication(10, 20);
    division(10, 20);
    return 0;
}

void subtraction(int a, int b)
{
    int subtraction = a - b;
    cout<<subtraction<<endl;
}
void multiplication(int a, int b)
{
    int multiplication = a * b;
    cout<<multiplication<<endl;
}
void division(int a, int b)
{
    int division = (float)a / b;
    cout<<division<<endl;
}