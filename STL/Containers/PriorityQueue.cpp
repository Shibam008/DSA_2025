#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //* min-heap -> minimum value -> highest priority

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(30);   //^ push() method takes O(log n) time
    // 30
    pq1.push(15);
    // 15,30
    pq1.push(20);
    // 15,20,30

    cout << "Highest priority element : " << pq1.top() << endl;



    //* max-heap -> maximum value -> highest priority

    priority_queue<int> pq; // max heap

    pq.push(25);
    // 25
    pq.push(30);
    // 30,25
    pq.push(15);
    // 30,25,15
    pq.push(50);
    // 50,30,25,15

    cout << "Highest priority element : " << pq.top() << endl;

    pq.pop(); // 50 will be removed
    cout << "Highest priority element : " << pq.top() << endl;

    return 0;
}