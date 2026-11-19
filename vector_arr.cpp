#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1 = {1, 2, 3, 4};

    vector<int> vec2(10, -1);  // 10 taa ke -1 diye initialize korlam

    cout << vec1.size() << endl;

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }
    return 0;
}