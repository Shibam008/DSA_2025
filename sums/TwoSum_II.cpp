#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{

    vector<int> ans(2);
    int s = 0, e = arr.size() - 1;

    while (s < e)
    {
        int sum = arr[s] + arr[e];
        if (sum == target)
        {
            ans[0] = s;
            ans[1] = e;
            return ans;
        }
        else if (sum > target)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 13};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    for (int val : ans)
    {
        cout << val << " " << endl;
    }

    return 0;
}