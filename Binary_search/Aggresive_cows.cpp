#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int aggresiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int low = 1;                            // starting point
    int high = stalls[n - 1] - stalls[0]; // total distance range
    int ans = 0;

    while (low <= high)
    {

        int assumedPos = low + (high - low) / 2; 

        int currPos = stalls[0];
        int placedCow = 1;
        for (int i = 1; i < stalls.size(); i++)
        {
            if (currPos + assumedPos <= stalls[i])
            {
                currPos = stalls[i];
                placedCow++;
            }
        }

        if(placedCow >= k) {
            ans = assumedPos;
            low = assumedPos + 1;
        } else {
            high = assumedPos - 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {1, 2, 4, 8, 9};
    int ans = aggresiveCows(arr, 3);
    cout << ans;

    return 0;
}