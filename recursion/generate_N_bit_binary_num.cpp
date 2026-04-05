#include <iostream>
using namespace std;

void generateBinaryNum(int n, int zeroCnt, int oneCnt, string &temp)
{
    if(temp.size() == n)
    {
        cout << temp << endl;
        return;
    }

    temp.push_back('1');
    generateBinaryNum(n, zeroCnt, oneCnt + 1, temp);
    temp.pop_back();

    if(oneCnt > zeroCnt)
    {
        temp.push_back('0');
        generateBinaryNum(n, zeroCnt + 1, oneCnt, temp);
        temp.pop_back();
    }
}

int main() {
    string temp;
    generateBinaryNum(4, 0, 0, temp);
    cout <<"last : " <<temp;
    return 0;
}