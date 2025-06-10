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
    void privateVariable(){
      
    }
    
};

class student : private teacher {

public:

    void set() {
       protectedVariable = 10; 
    }

    void get() {
        cout << protectedVariable;
    }
};
class student2 : private student{
   
   public:
   void set2()
   {
    set();
   }

  void display(){
    get();
  }
};


int main() {
    // student s1;
    // s1.set();
    // s1.get();
    

    // student2 s2;
    // s2.set2();
    // s2.display();

  
    // s1.set();
    // s1.get();
    // student2 s2;
    // s2.display();
//   cout<<endl;
  
  cout<<sizeof(student)<<endl;
  cout<<sizeof(teacher);
//   cout<<endl;
//   cout<<sizeof(void);
    return 0;
}
