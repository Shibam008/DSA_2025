#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int mid, int st, int end)
{
    vector<int> temp(end - st + 1);
    int left = st;
    int right = mid + 1;
    int idx = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[idx] = arr[left];
            idx++;
            left++;
        }
        else
        {
            temp[idx] = arr[right];
            idx++;
            right++;
        }
    }

    while (left <= mid)
    {
        temp[idx] = arr[left];
        idx++;
        left++;
    }

    while (right <= end)
    {
        temp[idx] = arr[right];
        idx++;
        right++;
    }

    idx = 0;
    while (st <= end)
    {
        arr[st] = temp[idx];
        st++;
        idx++;
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st == end)
    {
        return;
    }

    int mid = st + (end - st) / 2;

    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, mid, st, end);
}

int main()
{
    vector<int> arr = {5, 7, 1, 3, 2, 6, 4};
    int n = 7;
    mergeSort(arr, 0, n - 1);
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}