//* String can be rotated by 2 element - clockwise or anticlockwise

#include <iostream>
using namespace std;

string rotateStringClockwise(string &s)
{
    int n = s.size();
    char last = s[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = last;
    return s;
}

string rotateStringAntiClockwise(string &s)
{
    int n = s.size();
    char first = s[0];
    for (int i = 0; i < n - 1; i++)
    {
        s[i] = s[i + 1];
    }
    s[n - 1] = first;
    return s;
}

bool isRotateBy2(string str1, string str2)
{
    string clk = str1, antiClk = str1;
    rotateStringClockwise(clk);
    rotateStringClockwise(clk);
    if (clk == str2)
        return true;
    rotateStringAntiClockwise(antiClk);
    rotateStringAntiClockwise(antiClk);
    if (antiClk == str2)
        return true;
    return false;
}

int main()
{
    string str1 = "shibam";
    string str2 = "mshiba";

    cout << isRotateBy2(str1, str2);
    return 0;
}