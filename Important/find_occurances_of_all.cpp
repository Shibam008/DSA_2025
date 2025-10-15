#include <iostream>
#include <vector>
using namespace std;
//!                             Store 2 number in 1 position
int main() {
    vector<int> nums = {3,2,5,3,1,2,3,7};

    int n = nums.size();

    for(int i = 0; i < n; i++) {
        nums[i]--;
    }

    for(int i = 0; i < n; i++) {
        nums[nums[i] % n] += n;
    }

    for(int i = 0; i < n; i++) {
        cout << i+1 << " - " << nums[i] / n << endl;
    }
    return 0;
}