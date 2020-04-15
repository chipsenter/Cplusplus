#include <iostream>

using namespace std;

int age {18} ;// Global variable

int main() {
    
    int age {16}; // Local variable will be printed to console
    cout << "Local variable will be printed " << age << endl;
    
    return 0;
}