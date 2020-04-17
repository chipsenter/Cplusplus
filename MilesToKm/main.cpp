#include <iostream>

using namespace std;

int main() {
    
    double kilometer {1.6};
    double miles {};
    
    cout << "=====================Miles to Kilometer=========================" << endl;
    
    cout<< "\nEnter your distance in mileage : ";
    cin >> miles;
    cout << "You enter : " << miles << " miles" << endl;
    cout << miles << " miles is equivalent to " << miles * kilometer << " kilometer" << endl;
    cout << endl;
    cout << "=====================KM to Miles=============================" << endl;
    
    cout<< "\nEnter your distance in Kilometer : ";
    cin >> kilometer;
    cout << "You enter : " << kilometer << "kilometer" << endl;
    cout << kilometer << " kilometer is equivalent to " << kilometer * 0.621 << " miles" << endl;
    
    
    return 0;
}