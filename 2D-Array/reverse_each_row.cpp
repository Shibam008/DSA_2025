#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int leftDiagonal = 0, rightDiagonal = 0;

    vector<vector<int>> arr = {
        {1, 2, 3},
        {5, 6, 2},
        {3, 5, 3}};

    int row = arr.size(), col = arr[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int s = 0, e = col - 1;
            while (s <= e)
            {
                swap(arr[i][s++], arr[i][e--]);
            }
        }
    }

    for (vector<int> row : arr)
    {
        for (int el : row)
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}