#include <iostream>
using namespace std;

class Customer {
    public:

    string name;

    Customer(string name)
    {
        this->name = name;
        cout << "Constructor : " <<name<<endl;
    }

    ~Customer()
    {
        cout << "Destructor : " << name << endl;
    }
};

int main() {
    Customer c1("1"), c2("2"), c3("3");

    // Destructors are called in reverse order due to there may be depenedency.
    return 0;
}