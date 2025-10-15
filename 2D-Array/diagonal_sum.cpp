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

    if (row != col)
        cout << "Row and Column must be same!" << endl;
    else
    {
        for (int i = 0; i < row; i++)
        {
            leftDiagonal += arr[i][i];
        }

        int i = 0, j = col - 1;
        while (j >= 0) // it can be (i < row)
        {
            rightDiagonal += arr[i][j];
            i++;
            j--;
        }
    }

    cout << "Diagonal sum : " << leftDiagonal + rightDiagonal;

    return 0;
}