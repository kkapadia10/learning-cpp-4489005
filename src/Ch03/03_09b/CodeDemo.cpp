// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);
    primes.push_back(10);

    std::cout << "primes size is " << primes.size() << std::endl;
    std::cout << "the third element is " << primes[2] << std::endl;
    primes[2] = 20;
    std::cout << "the third element is " << primes[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
