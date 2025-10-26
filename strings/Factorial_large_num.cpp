#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> largeFactorial(int n) {
    int carry = 0;
    vector<int> ans(1,1);
    while(n >= 1) {
        for(int i=0; i<ans.size(); i++) {
            int prod = n * ans[i] + carry;
            ans[i] = prod % 10;
            carry = prod / 10;
        }
        while(carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        n--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    cout << "Enter a number : ";
    int n; cin >> n;
    cout << "Factorial of " << n << endl << "= ";
    vector<int> ans = largeFactorial(n);
    for(int el: ans) {
        cout << el;
    }
    return 0;
}