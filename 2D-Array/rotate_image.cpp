//* Rotate image by 90 degree.

//! transpose + reverse each row.

#include <iostream>
#include <vector>
using namespace std;

void rotate90Degree(vector<vector<int> > arr, int n) {
    //* Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    //* Reverse each row
    for(int i = 0; i < n; i++) {
        int s = 0, e = n - 1;
        while(s <= e) {
            swap(arr[i][s++], arr[i][e--]);
        }
    }
    

    for(auto row: arr) {
        for(int el: row) {
            cout << el << " ";
        }
        cout << endl;
    }
}

void rotate180Degree(vector<vector<int> > arr, int n) {
    //* rotate each column
    for(int j = 0; j < n; j++) {
        int s = 0, e = n - 1;
        while(s <= e) {
            swap(arr[s++][j], arr[e--][j]);
        }
    }
    //* rotate each row
    for(int i = 0; i < n; i++) {
        int s = 0, e = n - 1;
        while(s <= e) {
            swap(arr[i][s++], arr[i][e--]);
        }
    }

    for(vector<int> row: arr) {
        for(int el: row) {
            cout << el << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {5, 6, 2},
        {3, 5, 3}};

    int n = arr.size();

    //rotate90Degree(arr, n);
    rotate180Degree(arr, n);
    
    

    return 0;
}