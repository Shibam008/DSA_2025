//! leetcode -> 28

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void lpsFinder(vector<int> &lps, string s)
{
    int pre = 0, suf = 1;
    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            suf++;
            pre++;
        }
        else
        {
            if (pre == 0)
            {
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

int firstOccurence(string haystack, string needle)
{
    vector<int> lps(needle.size(), 0);
    lpsFinder(lps, needle);

    int fst = 0, sec = 0;

    while (fst < haystack.size() && sec < needle.size())
    {
        if (haystack[fst] == needle[sec])
        {
            fst++;
            sec++;
        }
        else
        {
            if (sec == 0)
            {
                fst++;
            }
            else
            {
                sec = lps[sec - 1];
            }
        }
    }
    if(sec == needle.size())
    {
        return fst - sec;
    }
    return -1;
}

int main()
{
    string haystack = "oniononionson";
    string needle = "onions";

    int ans = firstOccurence(haystack, needle);

    if(ans != -1)
    {
        cout << "First occurence at index : " << ans << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    return 0;
}