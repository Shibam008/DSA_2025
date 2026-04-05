#include <iostream>
using namespace std;

class Car
{
    public:
    string brand;
    int price;

    // Member functions don’t increase class size 
    // because they are stored separately in code memory
    void showDetails() {
        cout << "Brand : " << brand << endl;
        cout << "Price : " << price << endl;
    }
};

//* Empty class has size 1 byte instead of 0 byte
// So the objects have unique address.

class A {};

//? Padding & Alignment

class Exmpl1
{
    int age;
    char ch;
};

class Exmpl2
{
    int age;
    char ch;
    char c;
};

class Exmpl3           // Bad alignment
{
    char ch;
    int age;
    char c;
};

int main() {
    // Static Memory allocation
    Car c1;
    c1.brand = "Toyota";
    c1.price = 2100000;
    c1.showDetails();

    // Dynamic Memory allocation
    Car* c2 = new Car;
    (*c2).brand = "Tesla";
    (*c2).price = 6500000;
    (*c2).showDetails();

    cout << "Sizeof(string) : " << sizeof(string) << endl;

    cout << "Sizeof(Car) : " <<sizeof(Car) << endl; 

    cout << "Sizeof(A) : " <<sizeof(A) << endl;

    cout << "Sizeof(Exmpl1) : " <<sizeof(Exmpl1) << endl;

    cout << "Sizeof(Exmpl2) : " <<sizeof(Exmpl2) << endl;

    cout << "Sizeof(Exmpl3) : " <<sizeof(Exmpl3) << endl;

    return 0;
}