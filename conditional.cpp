#include <iostream>
using namespace std;
int main() 
{
int age;
cout << "Enter your age: ";
cin>>age;
if (age>=18){
    cout<<"You are eligible to vote."<<endl;
}
else{
    cout<<"You are not eligible to vote." <<endl;
}
switch (age) 
   
{
case 18:
cout<<"You are 18 years old."<<endl;
break;

default:
    break;
}
return 0;
}
