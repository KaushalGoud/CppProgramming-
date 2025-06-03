#include <iostream>
#include <string>
using namespace std;
class student
{
public:
string name;
double *cgpaPtr;
student(string name,int cgpa){
    this->name=name;
   cgpaPtr=new double;
   *cgpaPtr=cgpa;

}

student(student &obj){
    this->name=obj.name;
cgpaPtr=new double;
   *cgpaPtr=*obj.cgpaPtr;
}
void getInfo(){
    cout<<"Name:"<<name<<endl<<"CGPA:"<<*cgpaPtr;
}
};

int main()
{
  student s1("Kaushal Goud",9);
  student s2(s1);
s1.getInfo();
*(s2.cgpaPtr)=2.3; //Problem in shallow copy
s2.name="Madan";
cout<<endl;
s2.getInfo();


    return 0;
}