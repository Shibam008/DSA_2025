#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    
    dq.push_front(5);
    dq.push_front(2);

    cout << dq.size() << endl;

    dq.pop_back();
    dq.pop_front();

    cout << dq.size() << endl;

    cout << dq.front() << endl;
    cout << dq.back() << endl;


    return 0;
}