#include <iostream>
using namespace std;

bool isVowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return true;
    }
    return false;
}



int main() {
    string s1 = "shibam";
    int cnt = 0;
    
    // custom function
    // for(char ch: s1) {
    //     if(isVowel(ch))
    //     cnt++;
    // }


    //* Method 2

    string vowels = "aeiouAEIOU";
    for(char ch: s1) {
        if(vowels.find(ch) != string::npos) {
            cnt++;
        }
    }

    
    cout << cnt;
    return 0;
}