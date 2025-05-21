#include <iostream>
#include <string>
using namespace std;
class teacher
{

public:
  string name;
  string dept;
  double salary;

  // paramaterized constructor
  teacher(string name, string dept, double salary)
  {
    this->name = name;
    this->dept = dept;
    this->salary = salary;
  }
  // Copy constructor
  teacher(teacher &orgObj)
  {
    cout << "I am manual copy constructor"<<endl;
    this->name = orgObj.name;
    this->dept = orgObj.dept;
    this->salary = orgObj.salary;
  }
  void getInfo()
  {
    cout << name << endl
         << dept << endl
         << salary;
  }
};
int main()
{
  teacher t1("kaushal", "cyber security", 20000);
  // teacher t2(t1); // Default copy constructors -invoke
  teacher t2(t1); // Custom copy constructors -invoke

  t2.getInfo();

  return 0;
}
// wraping up the data and member functions in a class is called encapsulation
// this is a special pointer in c++ that points to the current pointer