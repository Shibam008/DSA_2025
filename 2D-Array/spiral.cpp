#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120},
        {130, 140, 150, 160}};

    int row = arr.size(), col = arr[0].size();
    int top = 0, right = col - 1, bottom = row - 1, left = 0;
    
    while(top <= bottom && left <= right) {

        //top
        for(int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;
        
        
        //right
        for(int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;
        
        //bottom
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        
    
        //left
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }


    return 0;
}