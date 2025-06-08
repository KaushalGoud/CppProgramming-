#include <iostream>
#include <string>
using namespace std;

class teacher {
private:
    int privateVariable;

protected:
    int protectedVariable;

public:
    int publicVariable;
};

class student : private teacher {
public:
    void set() {
       protectedVariable = 10; 
    }

    void get() {
        cout << protectedVariable;
    }
};


int main() {
    student s1;
  
    s1.set();
    s1.get();
    return 0;
}
