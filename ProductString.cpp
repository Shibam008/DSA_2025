#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> prodArray(vector<int> num1, vector<int> num2) {
    vector<int> result;
    int n = num1.size() - 1;
    int m = num2.size() - 1;
    int carry = 0;

    for(int i = n-1; i >= 0; i--) {

    }
    
    while(i >= 0 || j >= 0 || carry) {
        int n1 = (i >= 0) ? num1[i] : 1;
        int n2 = (j >= 0) ? num2[j] : 1;

        int prod = (n1 * n2) + carry;
        int digit = prod % 10;
        result.push_back(digit);
        carry = prod / 10;
        i--;j--;
    }
    reverse(result.begin(), result.end());
    return result;
}
int main() {
    vector<int> num1 = {1,2};
    vector<int> num2 = {1,2};

    vector<int> ans = prodArray(num1, num2);
    for(int el : ans) {
        cout << el;
    }cout<<endl;
    return 0;
}