#include <iostream>
using namespace std;

void printArr(int arr[], int idx, int n)
{
    if (idx == n)
        return;

    cout << arr[idx] << " ";
    printArr(arr, idx + 1, n);
}

void printArrRev(int arr[], int idx, int n)
{
    if (idx == n)
        return;

    printArrRev(arr, idx + 1, n);
    cout << arr[idx] << " ";
}

void print(int arr[], int idx)
{
    if (idx == -1)
        return;

    cout << arr[idx] << " ";
    print(arr, idx - 1);
}

int sum(int arr[], int idx, int &ans)
{
    if (idx == -1)
        return ans;

    ans += arr[idx];
    sum(arr, idx - 1, ans);
}

int efficientSumBackward(int arr[], int idx)
{
    if (idx == -1)
        return 0;

    return arr[idx] + efficientSumBackward(arr, idx - 1);
}

int efficientSumForward(int arr[], int idx, int n)
{
    if (idx == n)
        return 0;

    return arr[idx] + efficientSumForward(arr, idx + 1, n);
}

int findMin(int arr[], int idx, int n, int &ans)
{
    if (idx == n)
        return ans;

    if (arr[idx] < ans)
        ans = arr[idx];

    findMin(arr, idx + 1, n, ans);
}

int findMinEfficient(int arr[], int idx, int n)
{
    if (idx == n - 1)
        return arr[idx];

    return min(arr[idx], findMinEfficient(arr, idx + 1, n));
}

int main()
{
    int arr[] = {5, 8, 6, 4, 9};
    int n = 5;

    //* starting from first index
    // printArr(arr, 0, n);
    // printArrRev(arr, 0, n);

    //* starting from last index
    // print(arr, n-1);

    //* sum of all array elements
    // int x = 0;
    // sum(arr, n-1, x);
    // cout << "Sum of all elements : " << x;

    // cout << efficientSumBackward(arr, n-1);
    // cout << efficientSumForward(arr, 0, n);

    //* Find minimun and Maximum
    // int x ;
    // cout << findMin(arr, 1, n, x);

    cout << findMinEfficient(arr, 0, n);

    return 0;
}