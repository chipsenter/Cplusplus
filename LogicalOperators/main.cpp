#include <iostream>

using namespace std;

int main() {
    
    int num1{},num2{},num3;
    int result{};
    int result1{};
    
    cout << "Enter 3 numbers with spaces between: ";
    
    // Example 1
    cin >> num1 >> num2 >> num3;
    result = num1 + num2 *  num3;
    cout << "The Total of the numbers is: " << result << endl;
    
    // Example 2
    cout << "Enter 3 new numbers with spaces between: ";
    
    cin >> num1 >> num2 >> num3;
    result = (num1 + (num2 *  num3));
    cout << "The Total of the numbers is: " << result << endl;
    
    // Example 3
    cout << "Enter 3 new numbers with spaces between: ";
    
    cin >> num1 >> num2 >> num3;
    result1 = num1 + num2 -  num3;
    cout << "The Total of the numbers is: " << result1 << endl;
    
    //Example 4
    cout << "Enter 3 new numbers with spaces between: ";
    
    cin >> num1 >> num2 >> num3;
    result1 = ((num1 + num2) -  num3);
    cout << "The Total of the numbers is: " << result1 << endl;
    
    
    
    return 0;
}