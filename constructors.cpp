#include <iostream>
#include <string>
using namespace std;
class teacher
{
    
public:

string name;
string dept;
double salary;
 
// Non-paramaterized
teacher(string n,string d, double s){
  name=n;
  dept=d;
  salary=s;
  cout<<name<<dept<<salary;
}


};
int main()
{
    teacher t1("kaushal","cyber security",20000);
   
    return 0;
}
//wraping up the data and member functions in a class is called encapsulation