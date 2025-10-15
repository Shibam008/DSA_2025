#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n = 12, cnt = 0;
    while(n>=1){
        n = n/2;
        cnt++;
    }
    cout << pow(2, cnt-1);

    return 0;
}