#include <iostream>
#include<vector>
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
                //lps[suf] = 0; -> need not this line as we initialize our lps array with 0
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
    string s = "abcabdabc";
    cout << lpsFinder(s) << endl;

    return 0;
}