#include <iostream>

using namespace std;

int main() {
    
    int total {};
    int num1{},num2{},num3{};
    const int count {3};
    
    cout << "Enter 3 intefers separated by spaces: ";
    cin >> num1>>num2>>num3;
    
    total = num1 + num2 + num3;
    
    double avg {0.0};
    avg =  static_cast<double>(total) / count;
            // avg = (double)total/count; // Old style of casting
    
    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << avg << endl;
    
    
    cout <<endl;
    return 0;
}