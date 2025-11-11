#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'a', 'a', 'a'};

    int n = chars.size();
    int read = 0;
    int write = 0;

    while(read < n) 
    {
        char current_char = chars[read];
        int count = 0;

        while(read < n && chars[read] == current_char) {
            read++;
            count++;
        }

        chars[write] = current_char;
        write++;

        if(count > 1) {
            string cnt = to_string(count);
            for(auto ch: cnt) {
                chars[write] = ch;
                write++;
            }
        }
    }

    for(char ch: chars) cout << ch;
    cout << endl << write;
        
    return 0;
}