#include <bits/stdc++.h>
using namespace std;
vector<int> pairSum(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    vector<int> ans;

    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            ans.push_back(start);
            ans.push_back(end);

            return ans;
        }

        else if (arr[start] + arr[end] > target)
        {
            end--;
        }

        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 7, 11, 15};

    int target = 9;

    vector<int> ans = pairSum(arr, target);

    if (ans.size() == 2)
    {
        cout << ans[0] <<","<< ans[1] << endl;
    }
    else
    {
        cout<< "Not Found";
    }
    return 0;
}