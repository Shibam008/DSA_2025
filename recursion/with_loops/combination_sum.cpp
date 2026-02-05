#include <iostream>
#include <vector>
using namespace std;

void combinationSum(vector<int>&arr, vector<int>&temp, vector<vector<int>>&ans, int idx, int target)  
{
    if(target == 0) {
        ans.push_back(temp);
        return;
    }
    if(target < 0) {
        return;
    }

    for(int i = idx; i < arr.size(); i++)
    {
        temp.push_back(arr[i]);
        combinationSum(arr, temp, ans, i, target - arr[i]); // *Note
        temp.pop_back();
    }

    // *Note
    // tracking index for using same elements unlimited number of time
    // prevents accessing previous elements
}

int main() {
    vector<int> candidates = {2, 3, 5};
    int target = 8;
    vector<vector<int>> ans;
    vector<int>temp;

    combinationSum(candidates, temp, ans, 0, target);

    for(auto row: ans) {
        for(auto val: row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}