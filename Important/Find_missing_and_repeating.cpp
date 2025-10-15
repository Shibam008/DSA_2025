#include <iostream>
#include <vector>
using namespace std;

//!                      "Store 2 number in 1 position"  -- optimalSolution()

void expectedSolution(vector<int> arr)
{ //*  T.C -> O(n) and S.C -> O(n)
    int n = arr.size();

    vector<int> count(n, 0);

    for (int i = 0; i < n; i++)
    {
        // arr[arr[i] - 1]++
        int el = arr[i] - 1;
        count[el]++;
    }

    // find missing
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 0)
        {
            cout << "Missing element : " << i + 1 << endl;
            break;
        }
    }
    // find repeating
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 2)
        {
            cout << "Repeating element : " << i + 1 << endl;
            break;
        }
    }
}

void optimalSolution(vector<int> arr) //*  T.C -> O(n) and S.C -> O(1)
{
    int n = arr.size();
    // step 1
    for (int i = 0; i < n; i++)
    {
        arr[i]--;
    }
    // step 2
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] += n;
    }
    // step 3
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n == 0) {
            cout << "Missing Number : " << i + 1 << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n == 2) {
            cout << "Repeating Number : " << i + 1 << endl;
            break;
        }
    }
}
int main()
{
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};

    // expectedSolution(arr);
    optimalSolution(arr);

    return 0;
}