#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, -3, 6, 3, -5, 15};
    int sum = 0;
    int maxi = nums[0];
    for(int i=0; i<nums.size(); i++) {
        sum += nums[i];
        maxi = max(sum, maxi);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
    return 0;
}