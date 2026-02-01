#include <iostream>
#include <vector>
using namespace std;

/*
    Here number lies between [-10 to 10] means total 21 numbers
    our array = [1, 1, 2]

    to track visited element of array inside trackNumber -> 
        1 + 10 = 11 idx
        2 + 10 = 12 idx
        etc..

*/

void permut(vector<int>&arr, vector<vector<int>>&ans, int idx) 
{
    if(idx == arr.size()) {
        ans.push_back(arr);
        return;
    }

    vector<bool> trackNumber(21, 0);

    for(int i = idx; i < arr.size(); i++) 
    {
        if(trackNumber[arr[i] + 10] == 0) 
        {
            trackNumber[arr[i] + 10] = 1;
            swap(arr[i], arr[idx]);
            permut(arr, ans, idx + 1);
            swap(arr[i], arr[idx]);
        }
    }

}

int main() {
    vector<int> arr = {1,1,2};
    vector<vector<int>> ans;
    permut(arr, ans, 0);

    for(auto row: ans) {
        for(auto val: row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}