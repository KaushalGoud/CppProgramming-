#include <iostream>
#include <string>
using namespace std;
class Sandwich
{
public:
    string BreadType;
    string fillings;
    string sauce;
    bool isToasted = true;
    string extraFill;
    Sandwich(string BreadType, string fillings, string sauce)
    {
        this->BreadType = BreadType;
        this->fillings = fillings;
        this->sauce = sauce;
    }
    void yourOrder()
    {
        cout << "Your order:" << endl
             << BreadType << " sandwich with " << fillings << " and with " << sauce << " is ready.";
    }
};

class vegSandwich : public Sandwich
{
public:
    vegSandwich(string BreadType, string fillings, string sauce) : Sandwich(BreadType, fillings, sauce)
    {
    }
};
class cSandwich : public Sandwich
{
public:
    string extraFill;
    cSandwich(string BreadType, string fillings, string sauce, string extraFill) : Sandwich(BreadType, fillings+ extraFill, sauce)
    {
        this->extraFill;
      
    } 
    

};
int main()
{
      string choice;
      cout<<"Which sandwich you want to eat Veg or Non-veg sir?"<<endl;
      cin>>choice;
      cout<<"Okay sir! :)"<<endl;
      if(choice=="chicken"){
     cSandwich c1("Chicken","sauce mayo tomato","ketchup"," ,chicken pattie");
     c1.yourOrder();
     
     
      }
      else if(choice=="veg"){
        vegSandwich v1("Veg","sauce mayo tomato","ketchup");
        v1.yourOrder();
      }
    return 0;
}