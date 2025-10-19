#include <iostream>
#include <vector>
using namespace std;

string sortSentence(string s) {
    vector<string> ans(10);
    string temp;
    int cnt = 0;

    for(int i = 0; i < s.size(); i++) 
    {
        if(s[i] == ' ') {
            int pos = temp[temp.size()-1] - '0'; // getting numbers
            temp.pop_back(); // removing number from word
            ans[pos] = temp;
            temp.clear();
            cnt++; // counting total words;
        }
        else {
            temp += s[i];
        }
    }

    // for last word we don't have any ' ' left at the last.
    // so inside out temp there will be the last word stored.
    // for handling that last word we have to write this again outside loop

    int pos = temp[temp.size()-1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    cnt++;

    for(int i = 1; i <= cnt; i++) {
        temp += ans[i];
        temp += ' ';
    }

    temp.pop_back();
    return temp;
}

int main() {
    string s = "is2 sentence4 This1 a3";
    string ans = sortSentence(s);
    cout << ans;

    return 0;
}