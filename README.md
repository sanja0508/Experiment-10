# Experiment-10

Aim: To understand different parameter passing methods in C++, especially call by value, call by pointer, and call by reference.

Software Required: Visual Studio (or any standard C++ compiler such as Code::Blocks, Dev C++, Turbo C++)

Theory: In C++, functions can accept arguments in several ways, which determine whether or not the original data can be modified from within the function. 
The three primary parameter passing methods are:

1. Call by Value
In call by value, the actual values of the arguments are copied into the function’s parameters. The function works on these copies, meaning that any changes made inside the function do not affect the original variables. This method is safe and secure, as it ensures that the original data remains unchanged. It is ideal for situations where the function is only meant to use the data, not modify it.

2. Call by Pointer
In call by pointer, the addresses of the actual variables are passed to the function. The function then uses these pointers to directly access and modify the values stored in memory. This means any changes made inside the function will reflect in the original variables. Although this method allows greater control over data, it requires careful handling to avoid memory-related errors. It is especially useful in dynamic memory management and when dealing with large data structures like arrays.

3. Call by Reference
Call by reference passes arguments by creating aliases to the original variables. Instead of making a copy or passing an address, the function parameters directly refer to the original memory locations. This allows the function to modify the actual variables without the need for pointers. It is a simpler and safer alternative to pointer-based reference passing and is widely used in modern C++ for clean and efficient code.

Comparison of Methods :
Call by value passes a copy of the data, so any modifications remain local to the function.
Call by pointer passes the memory address of variables, allowing direct access and modification of the original data through dereferencing.
Call by reference passes the original variable itself via an alias, enabling the function to work on the actual data without using pointers.
In terms of modification capability, both call by pointer and call by reference allow changes to the original variables, whereas call by value does not. However, call by reference is generally considered safer and more readable than using pointers directly.

Practical Use Cases:
Use call by value when you want to protect the original data from being altered.
Use call by pointer when you need to modify data and are dealing with dynamic structures or want to simulate reference passing manually.
Use call by reference for cleaner syntax and when direct modification is required without pointer complexity.

Conclusion: This experiment demonstrated the behavior of functions using different parameter passing techniques in C++.
Call by value ensures data safety by passing a copy, so changes are local.
Call by pointer allows modification of original variables through memory addresses but requires careful use.
Call by reference offers a safe and efficient way to allow functions to alter arguments directly without pointer overhead.

Understanding these concepts is essential for designing functions that behave correctly, optimize performance, and manage memory efficiently in C++ programming.
