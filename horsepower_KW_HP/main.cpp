#include <iostream>

using namespace std;

int main() {
    
    const double kilo_watt {1.34};
    const double horsepower {0.75};
    
    cout << "Enter your output in Kilowatt (KW) :";    
    
    double hp {0.0};
    double kilowatt {0.0};
    
    cin >> kilowatt;   
    hp = kilowatt * kilo_watt;
    
    cout << kilowatt << "kw is equivalent to " << hp << "hp" << endl;
    cout << endl;
    
    cout << "Enter your output in Horsepower (HP) :";
    cin >> hp;
    kilowatt = hp * horsepower;
    
    cout << hp << "hp is equivalent to " << kilowatt << "kw" << endl;
    
    return 0;
}