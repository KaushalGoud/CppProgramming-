#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    int *rollnoptr;
    student(string name, int rollno)
    {
        this->name = name;
        rollnoptr = new int;
        *rollnoptr = rollno;
    }
    student(student &obj)
    {
        this->name = obj.name;

        this->rollnoptr = obj.rollnoptr;
    }
    void getInfo()
    {
        cout << name << endl
             << *rollnoptr;
    }
};
int main()
{
    student s1("kaushal", 1);
    student s2(s1);//default copy constructor
    s1.getInfo();
    
    *(s2.rollnoptr) = 2;
    cout <<endl<< "After" << endl;
    s1.getInfo();
    

    return 0;
}