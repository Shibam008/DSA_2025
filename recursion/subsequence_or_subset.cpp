// Here we will solve three questions.

//!         Include-Exclude pattern

/*
    1. all the subset/subsequence of given array
    2. all the subset/subsequence of given string
    3. Generate Parenthesis.
*/

#include <iostream>
#include <vector>
using namespace std;

void subsequence(vector<int>arr, int idx, int n, vector<int>&temp, vector<vector<int>>&ans) {

    if(idx == n) {
        ans.push_back(temp);
        return;
    }
    // exclude
    subsequence(arr, idx+1, n, temp, ans);
    // include
    temp.push_back(arr[idx]);
    subsequence(arr, idx+1, n, temp, ans);
    temp.pop_back();
}


int main() {
    vector<int> num = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int>temp;

    subsequence(num, 0, num.size(), temp, ans);

    for(vector<int> subset: ans) {
        for(int val: subset) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}