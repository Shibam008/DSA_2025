#include <iostream>
#include <vector>
using namespace std;

void permutation(vector<int>&arr, vector<vector<int>>&ans, int idx) 
{
    if(idx == arr.size()) 
    {
        ans.push_back(arr);
        return;
    }

    for(int i=idx; i<arr.size(); i++) {
        swap(arr[i], arr[idx]);
        permutation(arr, ans, idx+1);
        swap(arr[i], arr[idx]);
    }
}

int main() {
    vector<int> arr = {1,2,3};
    vector<vector<int>>ans;
    permutation(arr, ans, 0);

    for(vector<int> arr: ans) {
        for(int el: arr) {
            cout << el << " ";
        }
        cout<<endl;
    }
    return 0;
}