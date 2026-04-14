// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Hello! What is your name?" << std::flush;
    std::cin>>str;
    std::cout<< "Hello " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return(0);
}