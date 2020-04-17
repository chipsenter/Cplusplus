#include <iostream>

using namespace std;

int main() {
    
//    int a { 10 }, b { 20 };
//    int score { 92 };
//    int result {};
//    
//    cout << "Enter your result ";
//    cin >> result;
//    
//    result = (a > b) ? a : b;
//        cout << result;
//    result = (a < b) ? (b-a) : (a-b);
//    result = (b != 0) ? (a/b) : 0;
//    
//    cout << ((score > 90) ? "Excellent" : "Good ");
    
    // Example 2
//    int num {};
//    
//    cout << "Enter an integer: ";
//    cin >> num;
//    
//    if (num % 2 == 0) 
//        cout << num << " is even" << endl;
//    else
//        cout << "is odd" << endl;
//        
//     cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;   
    
    int num1{}, num2{};
    
    cout << "Enter two integers separated by a space: " ;
    cin >> num1 >> num2;
    
    if (num1 != num2){
        cout << "Largest: " << ((num1 > num2) ? num1 : num2 ) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2 ) << endl;
    } else {
        cout << "The numbers are the same" << endl;
    }
    
    return 0;
}