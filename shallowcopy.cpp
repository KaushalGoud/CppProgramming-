#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    double *cgpaPtr;
    student(string name, int cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    student(student &obj)
    {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo()
    {
        cout << "Name:" << name << endl
             << "CGPA:" << *cgpaPtr;
    }
};

int main()
{
    student s1("Kaushal Goud", 9);
    student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 2.3; // Problem in shallow copy
    cout << endl;
    s1.getInfo();

    return 0;
}