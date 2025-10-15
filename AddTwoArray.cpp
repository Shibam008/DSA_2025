#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> addArray(vector<int> &arr, vector<int> brr)
{
    vector<int> ans;
    int carry = 0;
    int i = arr.size() - 1, j = brr.size() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int n1 = (i>=0) ? arr[i] : 0;
        int n2 = (j>=0) ? brr[j] : 0;

        int sum = n1 + n2 + carry;
        int digit = sum % 10;
        carry = sum / 10;

        ans.push_back(digit);

        i--;
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {9,9,9};
    vector<int> nums1 = {1};

    vector<int> ans = addArray(nums, nums1);

    for (int val : ans)
    {
        cout << val;
    }

    return 0;
}