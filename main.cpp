#include <iostream>
#include <string>

std::string say_hello() { 
    return std::string("Hello, CMake world!"); 
}

int main() {
    std::cout << say_hello() << std::endl;
    return 0;
}
