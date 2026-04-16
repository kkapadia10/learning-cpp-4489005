// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5/9) * (fahrenheit - 32);

    std::cout << "Celsius = " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << "float = " << weight << std::endl;
    std::cout << "int = " << (int)weight << std::endl;
    std::cout << "fractional part = " << (int)((weight - (int)weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
