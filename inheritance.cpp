#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    string brand="Toyota";
    void greetig(){
        cout<<"Welcome to Toyota";
    }

};
class car:public vehicle{
    public:
string name="Supra";
};
int main(){
   car c1;
   c1.greetig();
   cout<<endl;
   cout<<c1.brand<<endl;
   cout<<c1.name;
   

   
    return 0;

}