#include <iostream>
#include <vector>
using namespace std;

void subsetSum(int*arr, int idx, int n, int sum, vector<int>&ans) {
    if(idx == n) {
        ans.push_back(sum);
        return;
    }
    subsetSum(arr, idx+1, n, sum, ans);
    subsetSum(arr, idx+1, n, sum+arr[idx], ans);
}

int main() {
    int arr[] = {1, 2, 3};
    vector<int> ans;
    subsetSum(arr, 0, 3, 0, ans);
    for(int sum: ans) {
        cout << sum << endl;
    }
    return 0;
}