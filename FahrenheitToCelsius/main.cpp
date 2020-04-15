#include <iostream>

using namespace std;

int main() {
    
    double celsius {0.0};
    double fahrenheit {0.0};
    
    cout << "Enter the temperature in Fahrenheit: ";
    
    double f_input;
    cin >> f_input;
    
    celsius = (f_input - 32) / 1.8;
    cout <<"You entered : "<< f_input << " degrees Fahrenheit"<< endl;
    cout << f_input << "F is equivalent to " << celsius << " Celsius" << endl;
    cout << "=============================================" << endl;
    
    cout << "\nEnter the temperature in Celsius: ";
    
    double c_input;
    cin >> c_input;
    
    fahrenheit = c_input / 5 * 9 + 32;
    cout <<"You entered : "<< c_input << " Celsius"<< endl;
    cout << c_input << "C is equivalent to " << fahrenheit << " degrees Fahrenheit" << endl;
    cout << "\n============================================";
    

    
    
    return 0;
}