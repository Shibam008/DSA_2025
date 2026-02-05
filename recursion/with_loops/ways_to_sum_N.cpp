#include <iostream>
#include <vector>
using namespace std;

// Will be optimized with DP

// Here order matters means - 
/*
    [1, 2], sum = 3
    
    [
        [1, 1, 1],
        [1, 2],
        [2, 1]          <- //* In "target-sum-repetation problem it's not allowed"
    ]
*/

int ways(vector<int>&arr, int&ans, int sum)   
{
    if(sum == 0)
    return 1;

    if(sum < 0)
    return 0;
    
    for(int i = 0; i < arr.size(); i++) 
    {
        ans += ways(arr, ans, sum - arr[i]);
    }
}

int main() {
    vector<int> nums = {1, 2};
    int sum = 3;
    int ans = 0;
    ways(nums, ans, sum);
    cout << ans;

    return 0;
}