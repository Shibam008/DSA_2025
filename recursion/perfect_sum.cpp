#include <iostream>
using namespace std;

//* Count all combinations of perfect sum

int perfect_sum(int *arr, int idx, int n, int target)
{
    if (idx == n) {
        return target == 0;
    }
    return perfect_sum(arr, idx + 1, n, target) +
           perfect_sum(arr, idx + 1, n, target - arr[idx]);
}

int main()
{
    int arr[] = {1, 0};
    int target = 1;

    cout << perfect_sum(arr, 0, 2, target);
    return 0;
}

// this base case handles 0 properly. We can also use the base case
// just like used in "Target sum with repetition" but that can't handle 0.