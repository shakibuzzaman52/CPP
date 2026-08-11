#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout << id << endl << gpa << endl;
    }
};
int main()
{
    student shakib;
    shakib.id = 3412;
    shakib.gpa = 5.00;
    shakib.display();

    student rakib;
    rakib.id = 3456; 
    rakib.gpa = 4.75;
    rakib.display();
    
    return 0;
}