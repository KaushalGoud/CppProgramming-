// #include <iostream>
// using namespace std;
// int main() 
// {
// int i= 0;
// for(i=0; i<5; i++){
//     cout<< "Hello World!"<<endl;
// }
// cout<<endl;
// while (i<10){
//     cout<< "Hello Universe!"<<endl;
//     i++;
// }



// return 0;
// }
//arrays
#include <iostream>
#include <limits>
using namespace std;
int main() 
{
int arr[5] = {1, 2, 3, 4, 5};
for(int i=0; i<5; i++){
    cout<< arr[i] << endl;


}
int a=2;
cout<<"Typecasting"<<endl;
// cout<<float(a)<<endl;
cout<<numeric_limits<float>::min()<<endl;
cout<<numeric_limits<float>::max()<<endl;

return 0;
}

