#include <iostream>
#include <vector>
using namespace std;

int main() {

    int maxSum = INT8_MIN, maximumSumRow = -1;

    vector<vector<int> > arr = {
        {1, 2, 3},
        {5, 6, 2},
        {3, 5, 3}
    };  


    for(int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for(int j = 0; j < arr[0].size(); j++) {
            sum += arr[i][j];
            if(maxSum < sum) {
                maxSum = sum;
                maximumSumRow = i;
            }
        }
    }

    cout << "Maximum sum : " << maxSum << " at row : " << maximumSumRow << endl;
    
    
    return 0;
}