//* Majority Element

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3,3,2,1,4,3,3};
    int n = nums.size();

    // finding candidate
    int candidate = 0, count = 0;
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            count = 1;
            candidate = nums[i];
        }
        else {
            if(candidate == nums[i]) {
                count++;
            }
            else{
                count--;
            }
        }
    }
    // verifying candidate
    count = 0;
    for(int el : nums) {
        if(el == candidate) count++;
    }

    if(count > n/2) {
        cout << "Majority element : " << candidate << endl;
    }
    else {
        cout << "No majority element present" << endl;
    }
    return 0;
}