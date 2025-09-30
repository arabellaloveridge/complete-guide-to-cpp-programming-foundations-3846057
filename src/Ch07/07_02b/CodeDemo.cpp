// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>

class Inventory{
//type at base level
private:
    std::vector<std::string> *items; //pointer to vector of items
    int capacity; //max items allowed
};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
