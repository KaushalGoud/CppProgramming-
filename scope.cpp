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
  protected:
  int x;
public:
    void set() {
        protectedVariable = 10; // OK because it's within a derived class
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
