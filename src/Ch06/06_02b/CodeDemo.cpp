// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

// Takes args by value
int square(int x) {
    x = x * x; //x is automatic - ceases to exist once function returns
    return x; //value will return, scope will not
}

//Takes args by address
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Takes args by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp; //refs treated as values themselves as they are aliases
} 

int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
