#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int n, int target, int idx)
{
    if (idx == n)
    {
        return -1;
    }

    if (arr[idx] == target)
    {
        return idx;
    }

    return linearSearch(arr, n, target, idx + 1);
}

int binarySearch(vector<int> &arr, int st, int end, int target)
{
    if (st > end)
    {
        return -1;
    }

    int mid = st + (end - st) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
        return binarySearch(arr, st, mid - 1, target);
    }
}

int main()
{
    vector<int> arr = {10, 18, 12, 19, 25};
    //cout << linearSearch(arr, arr.size(), 19, 0);

    vector<int> nums = {10, 20, 30, 40, 50};
    cout << binarySearch(nums, 0, nums.size()-1, 40);

    return 0;
}