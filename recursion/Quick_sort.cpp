#include <iostream>
#include <vector>
using namespace std;

/*
1. take any element as pivot. (in our case we conside last element)

2. Place that pivot, where it should be

3. And during placing the pivot to its actual location
   we will make sure that left-side of pivotIndex is for
   small element than pivot
   and right-side of pivotIndx is for greater element than pivot.

4 . ***** //! Average time complexity ->> O(N log n)
    ***** //* Worst time complexity -> O (N^2)
*/
int partition(vector<int> &arr, int st, int end)
{
    int pivot = arr[end];
    int pos = st;

    for (int i = st; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if (st >= end)
    {
        return;
    }
    int pivotIdx = partition(arr, st, end);
    quickSort(arr, st, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, end);
}

int main()
{
    vector<int> arr = {10, 32, 15, 12, 13};
    quickSort(arr, 0, arr.size() - 1);
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}