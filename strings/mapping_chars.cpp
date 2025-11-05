#include <iostream>
#include <vector>
using namespace std;

// map chars like ->
/*
    index 0 represents a 
    index 1 represents b
    index 2 represents c
          .
          .
    index 25 represents z

    so we need a vector or array of size 26.
*/
int main() {
    string s = "abcgabgvdtaksjdgabbdgdhjshhjdhdtbbsgkdb";
    vector<int> smallAlphabetsCnt (26, 0);

    for(int i = 0; i < 26; i++) {
        smallAlphabetsCnt[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        char ch = i + 'a';
        cout << "'" << ch << "' - " << smallAlphabetsCnt[i] << "times." << endl;
    }
    
    return 0;
}