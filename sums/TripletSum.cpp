#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool hasTripletSum(vector<int> arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        int x = target - arr[i];
        int st = i + 1, end = n - 1;
        while (st < end)
        {
            if (arr[st] + arr[end] == x)
                return true;
            else if (arr[st] + arr[end] > x)
                end--;
            else
                st++;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int target = 13;

    cout << hasTripletSum(arr, target);

    return 0;
}