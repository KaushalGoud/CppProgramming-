#include<iostream>
#include<string>
using namespace std;

class Base1 {
public:
    void base() {
        cout << "Base1" << endl;
    }
};

class Base2 {
public:
    void base() {
        cout << "Base2" << endl;
    }
};

class Child : public Base1, public Base2 {
public:
    void base() {
        cout << "I am the child" << endl;
    }
};

int main() {
    Child c1;
    c1.base();  // Correct method call
    return 0;
}
