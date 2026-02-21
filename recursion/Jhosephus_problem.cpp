#include <iostream>
using namespace std;

int winner(int n, int k)
{
    if(n == 0)
    return 0;

    return (winner(n-1, k) + k) % n;
}

int main() {
    int ans = winner(100, 3);
    cout << ans + 1;
    return 0;
}