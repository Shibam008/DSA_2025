#include <iostream>
using namespace std;
bool target_sum(int*arr, int idx, int n, int target) {
    if(target == 0) {
        return true;
    }
    if(idx == n) {
        return false;
    }

    return target_sum(arr, idx+1, n, target) || target_sum(arr, idx+1, n, target-arr[idx]);
}

int main() {
    int arr[] = {3, 4, 6, 2, 5};
    int target = 20;

    cout << target_sum(arr, 0, 5, target);
    return 0;
}