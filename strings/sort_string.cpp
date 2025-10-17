#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "bxdaajjkd";

    vector<int> alphabets(26, 0);
    int idx = 0;

    // count occurance of each alphabets || idx 0 represent a .. and so on.
    for (int i = 0; i < s.size(); i++)
    {
        alphabets[s[i] - 'a']++;
    }
    for (int i = 0; i < alphabets.size(); i++)
    {
        char ch = 'a' + i;
        while (alphabets[i])
        {
            s[idx++] = ch;  // No extra space. S.C -> O(1)
            alphabets[i]--;
        }
    }

    cout << s << endl;
    return 0;
}