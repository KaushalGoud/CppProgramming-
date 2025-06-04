#include<iostream>
using namespace std;
class teacher{
    public:
    string Faculty;
    string name;
    int age;
    teacher(string Faculty,string name,int age){
      this->Faculty=Faculty;
      this->name=name;
      this->age=age;
 }
 void getInfo(){
    cout<<"Faculty:"<<Faculty<<endl<<"Name:"<<name<<endl<<"Age:"<<age;
 }

};
class student:public teacher{
    public:
    float height;
   
    student(string Faculty,string name,int age,float height):teacher(Faculty,name,age){
   this->height=height;
 }


};
int main(){
    student  s1("Science","Kaushal",19,5.7);
  
    s1.getInfo();
    
    return 0;
}