#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// num1 = "123";
// num2 =  "52";
string addStrings(string num1, string num2) {
    string ans;
    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while(i >= 0 || j >= 0 || carry) {
        int n1 = (i >= 0) ? num1[i] - '0' : 0;
        int n2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = n1 + n2 + carry;
        char digit = (sum % 10) + '0';
        ans += digit;
        carry = sum / 10;

        i--;j--;
    }

    reverse(ans.begin(), ans.end());
    return ans;

}

int main() {
    string x = "269";
    string y = "15";
    
    string ans = addStrings(x, y);
    cout << ans << endl;
}