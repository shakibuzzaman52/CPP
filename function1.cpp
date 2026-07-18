#include <bits/stdc++.h>
using namespace std;
void addition(int a, int b)
{
    int sum = a + b;
    cout<<"Sum is = "<< sum<< endl;
}
void subtraction(int a, int b)
{
    int difference = a - b;
    cout<< "Difference is = " << difference<< endl;
}
void multiplication(int a, int b)
{
    int multiplication = a * b;
    cout<<"Multiplication is = "<< multiplication<<endl;
}
void division(int a, int b)
{
    float division = (float)a / b;
    cout<<"Division is = "<<division<<endl;
}
int main()
{
    addition(10, 20);
    subtraction(10, 20);
    multiplication(10, 20);
    division(10, 20);

    cout<<"All function is called.";
    
    return 0;
}