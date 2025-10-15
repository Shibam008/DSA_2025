#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 6},
        {5, 6, 2, 9},
        {3, 5, 3, 8}};

    int row = arr.size(), col = arr[0].size();

    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            //* up -> down
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            //* down -> up
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}