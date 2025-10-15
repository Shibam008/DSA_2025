#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> nums1, vector<int> nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;

        int i=0, j=0;
        while(i < n && j < m) {
            if(nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i < n) {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j < m) {
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }

int main() {
    vector<int> ans = merge({2,2,4,4}, {2, 2, 2, 4, 4, 4});
    for(int el : ans) {
        cout << el << " ";
    }
    return 0;
}