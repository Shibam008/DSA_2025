#include <iostream>
#include <vector>
using namespace std;

bool equalSubarraySum(vector<int> arr)
{
    int total_sum = 0, prefix = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        prefix += arr[i];
        if (total_sum == 2 * prefix)
            return true;
    }
    return false;
}
int main()
{
    vector<int> v = {2, 4, 6, 2, 1, 5, 8, 2, 30};
    cout << equalSubarraySum(v) << endl;
    return 0;
}