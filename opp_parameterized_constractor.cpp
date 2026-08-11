#include <bits/stdc++.h>
using namespace std;
 class student  // Class
 {
    public:
        int id;
        double gpa;

    student(int x, double y)  // Parameterized Constractor
    {
        id = x;
        gpa = y;
    }

    void display()
    {
        cout<<"Id = "<< id <<endl << "Gpa = "<< gpa<<endl;
    }
 };

int main()
{
    student shakib(3412, 5.00); // Object with constractor value
    shakib.display();

    student nishat(5456, 5.00);
    nishat.display();

    return 0;
}