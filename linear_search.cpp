#include <bits/stdc++.h>
using namespace std;
int main()
{
    int search_num, position = -1;
    int num[] = {5, 14, 23, 15, 18};
    cout << "Enter the number that you want to search :";
    cin >> search_num;

    for (int i = 0; i < 5; i++)
    {
        if (search_num == num[i])
        {
            position = i + 1;
            cout << "POsition is :" << position;
            break;
        }
    }
    if (position == -1)
    {
        cout << "Not found.";
    }

    return 0;
}