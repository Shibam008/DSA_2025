#include <iostream>
using namespace std;

int main() {
    // Qs. Convert an IP adress 0.0.0.0 to 0[.]0[.]0[.]0
    string ip = "0.0.0.0";
    string ans = "";
    for(int i=0; i<ip.size(); i++) {
        if(ip[i] == '.') {
            ans += "[.]";
        }
        else {
            ans += ip[i];
        }
    }
    cout << ans;
    return 0;
}