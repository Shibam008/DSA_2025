#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,1,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int slow = 0, fast = 1;

    while(fast < n) {
        if(arr[fast] != arr[slow]) {
            slow++;
            arr[slow] = arr[fast];
        }
        fast++;
    }

    for(int x: arr) {
        cout << x << " ";
    }
    return 0;
}