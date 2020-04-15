#include <iostream>

using namespace std;

int main() {
    
    int num1{}, num2{};
    
    cout << boolalpha;
    cout << "Enter 2 integers separated by space: ";
    cin >> num1>>num2;
    
    cout <<num1 << " > " << num2 << " :" << (num1 > num2) << endl;
    cout <<num1 << " >= " << num2 << " :" << (num1 >= num2) << endl;
    cout <<num1 << " < " << num2 << " :" << (num1 < num2) << endl;
    cout <<num1 << " <= " << num2 << " :" << (num1 <= num2) << endl;
    
    const int lower{10};
    const int upper{20};
    

    
    
    return 0;
}