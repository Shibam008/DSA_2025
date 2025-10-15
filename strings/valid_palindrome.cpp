#include <iostream>
#include <string>
#include <cctype>
#include<algorithm>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";
    if(s.empty()) return true;
        string ans = "";

        for(int i=0; i<s.size(); i++) {
            if(isupper(s[i])) {
                ans += tolower(s[i]);
            } else if(isalnum(s[i])) {
                ans += s[i];
            }
        }
        for(auto ch : ans) {
            cout << ch << "";
        }
cout << endl;
        string rev = ans;
        reverse(ans.begin(), ans.end());
        

        if(ans == rev) {
            cout << "Valid palindrom" << endl;
        } else {
            cout << "Invalid\n";
        }
    return 0;
}