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

    
};
class student:private teacher{
public:

void get(){
    cout<< protectedVariable;
}
};
int main(){
    teacher t1;

    return 0;
}