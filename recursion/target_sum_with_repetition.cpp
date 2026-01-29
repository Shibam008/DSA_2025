#include <iostream>
using namespace std;

// for {2, 3, 4} and target = 6
/*
Possible outcomes: 
    {2, 4}
    {2, 2, 2}
    {3, 3}
*/

int perfect_sum_rep(int*arr, int idx, int n, int target) 
{
    if(target == 0) {
        return 1;
    }
    if(idx == n || target < 0) {
        return 0;
    }

    return perfect_sum_rep(arr, idx + 1, n, target) + 
           perfect_sum_rep(arr, idx, n, target - arr[idx]);
}

int main() {
    int arr[] = {2, 3, 4};
    int tar = 6;
    cout << perfect_sum_rep(arr, 0, 3, tar);
    return 0;
}