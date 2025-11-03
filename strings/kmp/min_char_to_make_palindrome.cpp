#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lpsFinder(string s) {
    vector<int> lps(s.size(), 0);
    int pre = 0, suf = 1;

    while(suf < s.size()) 
    {
        if(s[pre] == s[suf]) {
            lps[suf] = pre + 1;
            suf++; pre++;
        }
        else {
            if(pre == 0) {
                lps[suf] = 0;
                suf++;
            }
            else {
                pre = lps[pre-1];
            }
        }
    }
    return lps[s.size() - 1];
}

int main() {
    string s = "abc";
    string newStr = s;                       
    newStr += '#';                           
    reverse(s.begin(), s.end());             
    newStr += s;                             
    int ans = s.size() - lpsFinder(newStr);  
    cout << "We need minimum -> " << ans << " characters to make it palindrome" << endl;
    return 0;
}

// step 1 : copy the original string into a new variable
// step 2 : add any special char at the end for differentiating
// step 3 : reverse the original string
// step 4 : add the reverse string to that new variable
// step 5 : find out the lps of this new string and substract from oroginal length