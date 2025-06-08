#include<iostream>
#include<string>
using namespace std;
class parent{
public:
parent(){
    cout<<"parent"<<endl;
}
};
class child:public parent{

    public:
    child(){
    cout<<"Child"<<endl;
    }

};
int main(){
child c1;
parent p1;

    return 0;
}