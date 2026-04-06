#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> ml;

    ml.push_back(10);
    ml.push_back(20);
    ml.push_back(30);
    ml.push_back(40);

    list<int>::iterator it = ml.begin();

    while (it != ml.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << ml.front() << endl;
    cout << ml.back() << endl;

    list<int>::iterator it2 = ml.begin();

    ml.push_back(10);

    while (it2 != ml.end())
    {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    //@ remove() methode removes all the occurences
    ml.remove(10);

    list<int>::iterator it3 = ml.begin();

    while (it3 != ml.end())
    {
        cout << *it3 << " ";
        it3++;
    }
    cout << endl;

    return 0;
}