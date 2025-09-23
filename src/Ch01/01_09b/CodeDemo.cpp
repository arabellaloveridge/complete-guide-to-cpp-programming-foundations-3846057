// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush; //makes sure output sent to terminal before waiting for input
    std::cin >> name; //input is name
    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}