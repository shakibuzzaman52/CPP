#include <bits/stdc++.h>
using namespace std;
int findNum(vector<int>nums)
{
    int sum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum = sum ^ nums[i];
    }

    cout<< sum;
    return sum;
}
int main()
{
    vector<int> nums = {4,1,2,1,2};
    findNum(nums);
    return 0;
}