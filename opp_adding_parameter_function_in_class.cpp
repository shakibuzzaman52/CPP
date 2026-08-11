#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;

    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout << id << endl
             << gpa << endl;
    }
};
int main()
{
    student shakib;
    shakib.setValue(2431, 4.85);
    shakib.display();

    student turjo;
    turjo.setValue(4567, 4.93);
    turjo.display();
    return 0;
}