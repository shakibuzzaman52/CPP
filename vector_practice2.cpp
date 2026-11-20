#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int sum_water_trap = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        
        int right_max = 0;
        int left_max = 0;
        for(int j = i + 1; j < arr.size(); j++)
        {
            right_max = max (right_max, arr[j]);
        }
        for(int j = i - 1; j >= 0; j--)
        {
            left_max = max(left_max, arr[j]);
        }

        int trap_water = max(0, min(right_max, left_max) - arr[i]);
        sum_water_trap = sum_water_trap + trap_water;
    }

    cout<< sum_water_trap;
    return 0;
}