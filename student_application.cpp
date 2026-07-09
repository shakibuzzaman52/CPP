#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter student number :";
    cin >> num;

    int student[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter marks of student " << i + 1 << " :";
        cin >> student[i];

        sum = sum + student[i];
    }

    cout << "Total marks of all student :" << sum << endl;
    float avg = (float)sum / num;
    cout << "Average marks of all student :" << avg << endl;


    // Max number  
    int max = student[0];
    for (int i = 1; i < num; i++)
    {
        if (max < student[i])
        {
            max = student[i];
        }
    }
    cout << "Max number is :" << max << endl;

    
    // Min number 
    int min = student[0];
    for (int i = 1; i < num; i++)
    {
        if (min > student[i])
        {
            min = student[i];
        }
    }
    cout << "Min number is :" << min;

    return 0;
}