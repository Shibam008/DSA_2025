//* 3sum
//? will be solving it by converting it into two sum

// First sort the array.
// take an ith element and prform two pointer from i+1 to n-1 
// if all the three elemn's sum == 0 then store it
// remove duplicates as well

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> findTriplet(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; i++)
    {
        if(i>0 && arr[i] == arr[i-1]) continue; //! skip the same

        int x = arr[i];
        int st = i + 1, end = n - 1;
        while (st < end)
        {
            int sum = x + arr[st] + arr[end];
            if (sum == 0)
            {
                ans.push_back({x, arr[st], arr[end]});
                st++;
                end--;

                //! skip duplicate start and end like- [-4,-1,-1,0,0,1,1,2,2]
                while(st < end && arr[st] == arr[st-1]) st++;
                while(st < end && arr[end] == arr[end+1]) end++;
            }
            else if (sum > 0)
            {
                end--;
            }
            else
            {
                st++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = findTriplet(nums);

    for (auto triplet : ans)
    {
        for (int el : triplet)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}