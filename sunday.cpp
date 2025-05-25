#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
    string name;
    int id;
    employee(string name, int id)
    {
        cout<<"Information of Employee:"<<id<<endl;
        this->name = name;
        this->id = id;
    }
    void getInfo()
    {
        cout << "Id:" << id;
        cout << "Name:" << name << endl;
    } 
};
int main()
{
    employee e1("Kaushal",1);
    e1.getInfo();
    return 0;
}