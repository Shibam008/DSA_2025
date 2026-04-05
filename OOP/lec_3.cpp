//* Static data member and function
//^ Encapsulation

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_num, balance;
    static int total_customer;

    public:

    Customer(string name, int acc_num, int balance)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        total_customer++;
    }

    int getTotalCustomer()
    {
        return total_customer;
    }
};

int Customer::total_customer = 0;

int main() {
    Customer A1("Joy", 36524, 5000);
    Customer A2("Ram", 36524, 8000);

    cout << A1.getTotalCustomer() << endl;

    Customer A3("Shibam", 5236, 8000);
    cout << A1.getTotalCustomer() << endl;
    return 0;
}