#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 6, 3, 5, 15};
    int n = nums.size();
    vector<int> prefix(n);
    vector<int> suffix(n);

    prefix[0] = nums[0];
    suffix[n-1] = nums[n-1];
    
    for(int i=1; i<nums.size(); i++) {
        prefix[i] = prefix[i-1] + nums[i];
    }

    for(int i=n-2; i>=0; i--) {
        suffix[i] = suffix[i+1] + nums[i];
    }

    cout << "Prefix sum : ";
    for(int el : prefix) {
        cout << el << " ";
    }
    cout << endl;

    cout << "Suffix sum : ";
    for(int el : suffix) {
        cout << el << " ";
    }
   
    return 0;
}