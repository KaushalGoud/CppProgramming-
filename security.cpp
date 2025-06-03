#include<iostream>
using namespace std;
class base{
private:
int privateVariable=1;
public:
int publicVariable=2;
protected:
int protectedVariable=3;

};
class derived:public base{
    public:
    // void getPrivate(){
    //     cout<<privateVariable;
    // }
    void getPublic(){
        cout<<publicVariable;
    }
    void getProtected(){
        protectedVariable=10;
        cout<<protectedVariable;
    }
};
int main(){
    derived d1;
    d1.getProtected();
    return 0;

}
