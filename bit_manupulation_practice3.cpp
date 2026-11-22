#include <bits/stdc++.h>
using namespace std;

int xorBeauty(vector<int> &nums)
{
    int a = 0, b = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        a = a | nums[i];
        b = b ^ nums[i];
    }
    cout<< (a & b);
    return (a & b);
}

int main()
{
    vector<int> nums = {2, 4, 5};
    xorBeauty(nums);
    return 0;
}