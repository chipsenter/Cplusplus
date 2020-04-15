#include <iostream>

using namespace std;

int main() {
    
    int age2 = 21; // C-like initialization
    
    int age3 (21); // Constructor initialization

    int age4 {21}; // C++11 list initialization syntax
    
    int age1;  // unititalized 
    
    cout << age1  <<endl;
    cout << age2 <<endl;
    cout << age3 <<endl;
    cout << age4 <<endl;
    
    return 0;
}