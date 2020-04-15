#include <iostream>

using namespace std;

int main() {
    
    double room_width {0};
    double room_length {0};
    
    cout << "Enter the width of the room in ft: " << endl;
    cin >> room_width;
    
    cout << "Enter the length of the room in ft: " << endl;
    cin >> room_length;
    
    cout << "The area of the room is : " << room_width * room_length << " square feet." << endl;
    
    return 0;
}