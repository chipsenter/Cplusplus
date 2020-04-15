#include <iostream>

extern int x; // this variable is not in scope - Linker error

int main() {
    
    std::cout << "Template" << std::endl;
    std::cout << x;
    
    return 0;
}
