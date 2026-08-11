#include <bits/stdc++.h>
using namespace std;

class student  // Class 
{
    public:
    int id;
    double gpa;
};

int main()
{
    student shakib;  // Object
    shakib.id = 3412;
    shakib.gpa = 5.00;
    cout<<shakib.id<<endl<<shakib.gpa<<endl;

    student nishat;
    nishat.id = 4532;
    nishat.gpa = 5.00;
    cout<<nishat.id<<endl<<nishat.gpa;

    return 0;
}