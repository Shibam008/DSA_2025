#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {5, 6, 2},
        {3, 5, 3}};

    int row = arr.size(), col = arr[0].size();

    for(int i = 0; i < row; i++) {
        for(int j = i; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(auto row: arr) {
        for(int el: row) {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}