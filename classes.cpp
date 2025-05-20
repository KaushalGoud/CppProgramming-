#include <iostream>
#include <string>
using namespace std;
class teacher
{
    // properties or attributes
public:
/**
 * constructor
 */
teacher(){
    dept="Computer Science";
    cout<<"Hello my name is Kaushal"<<endl;
}
    string name;
    string dept;
    double salary;

public:
    // methods means function or member functions
    void setDept(string department)
    {
        dept = department;
    }
    // string getdepart()
    // {
    
    //     return dept;
    // }
};
int main()
{
    teacher t1;
    t1.name="Kaushal";
    // t1.setDept("Computer science");
    cout << t1.name<<endl;
    cout << t1.dept;

    return 0;
}
//wraping up the data and member functions in a class is called encapsulation