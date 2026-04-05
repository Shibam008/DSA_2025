// Constructor

#include <iostream>
using namespace std;

class Customer {
public:
    string name;
    int acc_no;
    int balance;

    // Default Ctor
    Customer(){
        cout << "Object created" << endl;
    }

    // Parameterized Ctor
    Customer(string name, int acc_no, int balance) {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    // Copy Ctor (Manually created)
    // There is also a default-copy-constructor in cpp.
    Customer(Customer &x)
    {
        name = x.name;
        acc_no = x.acc_no;
        balance = x.balance;
    }

    //~ Inline Constructor
    //inline Customer(string a, int b, int c): name(a), acc_no(b), balance(c) {}

    void display()
    {
        cout << name << " " << acc_no << " " << balance << endl;
    }


    //* Destructor

    /*
        * It frees the dynamically allocated memory.
        It does not delete the object.
        The class and objs are destroyed automatically when stack got empty
        * Syntax of destructor: ~Customer(){}
    */
};

int main() {
    Customer c1("User", 1524, 2000);
    Customer c2("Shibam", 6041, 1650);

    c1.display();
    c2.display();

    Customer c3(c1); 
    c3.display();
    return 0;
}