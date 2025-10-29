#include <iostream>
#include <vector>
using namespace std;

// Longest prefix and suffix.

int longestPrefixSuffix(string s) 
{
    vector<int> lps(s.size(), 0);
    int pre = 0, suf = 1;
    while (suf < s.size())
    {
        if(s[pre] == s[suf]) // Match
        {
            lps[suf] = pre + 1;
            pre++; suf++;
        }
        else // Not match
        {
            if(pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1]; 
            }
        }
    }
    return lps[s.size() - 1];
}

int main() {
    string s = "abcabdabc";
    cout << "Longest prefix suffix : " << longestPrefixSuffix(s) << endl;
    return 0;
}