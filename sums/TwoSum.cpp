#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        vector<pair<int,int>> arr;
        
        for(int i=0; i<nums.size(); i++) {
            arr.push_back({nums[i],i}); // Pair number and indexes
        }

        sort(arr.begin(), arr.end());

        int s = 0, e = nums.size()-1;
        while(s < e) {
            int sum = arr[s].first + arr[e].first;
            if(sum == target) {
                ans[0] = arr[s].second;
                ans[1] = arr[e].second;
                break;
            }
            else if(sum > target) e--;
            else s++;
        }
        
        return ans;
    }

int main()
{
    vector<int> nums = {2,7,5,11,13};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    for(int val : ans) {
        cout << val << " " << endl;
    }

    return 0;
}