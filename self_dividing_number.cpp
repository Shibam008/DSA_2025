#include <iostream>
using namespace std;

bool selfDivide(int n)
{
    int org = n;
    while (n != 0)
    {
        int rem = n % 10;
        if (org % rem == 0)
        {
            n = n / 10;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << selfDivide(128);
    return 0;
}