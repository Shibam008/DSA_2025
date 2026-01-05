#include <iostream>
using namespace std;

bool checkPalindrome(string name, int st, int end) {
    // Base case
    if(st >= end) {
        return 1;
    }

    if(name[st] != name[end]) {
        return 0;
    } else {
        return checkPalindrome(name, st+1, end-1);
    }
}

int countVowels(string str, int idx) {
    string vowels = "aeiouAEIOU";

    if(idx == -1) {
        return 0;
    }

    if(vowels.find(str[idx]) != string::npos) {
        return 1 + countVowels(str, idx-1);
    }
    else {
        return countVowels(str, idx-1);
    }
}

void reverse(string&str, int st, int end) {
    if(st >= end) {
        return;
    }

    swap(str[st], str[end]);

    reverse(str, st+1, end-1);

}

void lowerToUpper(string&str, int idx) {
    if(idx == -1) {
        return;
    }
    str[idx] = 'A' + str[idx] - 'a';
    lowerToUpper(str, idx-1);
}

int main() {
    //* Check Palindrom

    // string s1 = "namon";
    // int n = s1.size();
    // if(checkPalindrome(s1, 0, n-1)) {
    //     cout << "Palindrome";
    // } else {
    //     cout << "Not a palindrome";
    // }

    //* Count vowels
    // string s2 = "shibam";
    // int n = s2.size();
    // cout << countVowels(s2, n-1);
    
    //* Reverse string
    // string str = "shibam";
    // int n = str.size();
    // reverse(str, 0, n-1);
    // cout << str;

    //* Lower to upper
    string s3 = "shibam";
    int n = s3.size();
    lowerToUpper(s3, n-1);
    cout << s3;
    return 0;
}