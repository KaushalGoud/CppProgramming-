🧱 1. Object-Oriented Programming (OOP)
C++ supports OOP, which is the biggest leap from C.

Classes and Objects

Encapsulation (private/public/protected)

Constructors & Destructors

Inheritance

Polymorphism (Compile-time: function overloading, Runtime: virtual functions)

Abstraction

📦 2. C++ Standard Library (STL)
Powerful built-in templates that save time and code.

Vectors, Lists, Maps, Sets

Stack, Queue, Priority Queue

Iterators

Algorithms (like sort, find, count)

🧠 3. Function Overloading and Default Arguments
In C++, you can define multiple functions with the same name as long as parameters differ.

📄 4. References
A new way to pass variables (like pointers, but safer).

cpp
Copy
Edit
void modify(int &x) { x = 10; } // pass by reference
🧹 5. RAII and Constructors/Destructors
Learn how constructors/destructors handle resource allocation automatically.

🏗️ 6. Templates
Generic programming — write functions and classes that work with any data type.

cpp
Copy
Edit
template<typename T>
T add(T a, T b) { return a + b; }
🧰 7. Operator Overloading
Define custom behavior for operators (+, ==, etc.) for user-defined types.

🔁 8. Namespaces
Avoid name collisions with namespace.

🧼 9. Smart Pointers (Modern C++)
Use unique_ptr, shared_ptr instead of raw pointers.

💡 Optional but Important (Modern C++)
auto keyword

nullptr instead of NULL

for (auto x : container) range-based for loop

Lambda functions

std::function, std::bind