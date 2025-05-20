#include <iostream>
using namespace std;
int main() 
{
short a = 10; // 2 bytes
int b = 20; // 4 bytes
long c = 30; // 8 bytes
long long df = 40; // 8 bytes
float d = 40.5; // 4 bytes
double e = 50.5; // 8 bytes
long double ef = 50.5; // 8 bytes
char f = 'A'; // 1 byte
bool g = true; // 1 byte
string h = "Hello"; // variable length
cout<< "Short: " << a << endl;
cout<< "Int: " << b << endl;
cout<< "Long: " << c << endl;
cout<< "Float: " << d << endl;
cout<< "Double: " << e << endl;
cout<< "Char: " << f << endl;
cout<< "Bool: " << g << endl;
cout<< "String: " << h << endl;
cout<< "Long long: " << df << endl;
cout<< "Long double: " << ef << endl;
return 0;
}