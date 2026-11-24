#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    float cgpa;

    void getPercantage()
    {
        cout << cgpa * 10 << "%\n ";
    }
};
int main()
{

    Student s1;
    s1.name = "Shakib Uz Zaman";
    cout<< s1.name;
    return 0;
}