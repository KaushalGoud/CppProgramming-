#include <iostream>
#include <string>
using namespace std;
class student
{
public:
string name;
double *cgpaPtr;
//constructor
student(string name,int cgpa){
    this->name=name;
   cgpaPtr=new double;
   *cgpaPtr=cgpa;

}
//destructor
~student(){
cout<<endl<<"Hy i am destructor";
delete cgpaPtr; //Proper way of deleting a dynamically made variable or occupied memory
//otherwise : memory leak 
}
  
void getInfo(){
    cout<<"Name:"<<name<<endl<<"CGPA:"<<*cgpaPtr;
}
};

int main()
{
  student s1("Kaushal Goud",9);
  
s1.getInfo();



    return 0;
}