#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int> > ans(3, vector<int>(3,0));

    vector<vector<int> > mat1 = {
        {1, 2, 3},
        {5, 6, 2},
        {3, 5, 3}
    };  

    vector<vector<int> > mat2 = {
        {1, 2, 3},
        {5, 6, 2},
        {3, 5, 3}
    };

    for(int i = 0; i < mat1.size(); i++) {
        for(int j = 0; j < mat1[0].size(); j++) {
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(auto row : ans) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}