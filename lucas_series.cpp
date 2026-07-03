//2 1 3 4 7 ....
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int first = 2, second = 1, n, count = 0, lucas;
    cout<<"Enter a number :";
    cin>>n;

    while(count < n)
    {
        if(count == 0)
        {
            lucas = first;
        }
        else if(count == 1)
        {
            lucas = second;
        }
        else
        {
            lucas = first + second;
            first = second;
            second = lucas;
        }
        cout<<lucas<<" ";
        count++;
    }
    
    getch();
}