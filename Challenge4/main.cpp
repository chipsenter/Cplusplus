#include <iostream>

using namespace std;

int main() {
    
    int number_of_rooms {0}; // total amount of rooms
    const double room_price {30}; // $30 per room to clean
    const double tax_rate {0.06}; // 6 % tax rate
    const int estimate_expiry {30}; // valid for 30 days
    
    
    cout << "Welcome to Frank''s Carpet Cleaning Service " << endl;
    
    cout << "\nPlease enter the amount of room you wish to clean ? " << endl;
    cin >> number_of_rooms;
    
    cout << "You entered: " << number_of_rooms << " rooms." <<endl;
    cout << "The room price is $" << room_price << "/per room"<<endl;

    cout << "The total cost for room cleaning w/o tax is: $" << (number_of_rooms * room_price) << endl;
    cout << "The total tax is: $" << number_of_rooms * room_price * tax_rate << endl;
    cout << "=================================================== " << endl;
    cout << "The total cost for room cleaning with tax is: $" << (number_of_rooms * room_price) + (number_of_rooms * room_price* tax_rate)<< endl;
    
    cout << "The cleaning offer will be valid for " << estimate_expiry << " days , hope to see you soon!";
    
    return 0;
}