#include <bits/stdc++.h>
using namespace std;
class student
{
    public :
        int id;
        double gpa;

    student()  // Default cconstractor
    {
        cout<<"It is a default constractor."<<endl;
    }

    student( int x, double y)  // Parameterized Constractor
    {
        id = x;
        gpa = y;
    }

    void display()
    {
        cout<< id << endl << gpa << endl;
    }


};
int main()
{
    student shakib; // Default constractor object

    student nishat(3456, 4.96); // Parameterized constractor object

    return 0;
}