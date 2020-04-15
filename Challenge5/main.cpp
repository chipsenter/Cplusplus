#include <iostream>

using namespace std;

void shut_down(){
    
    cout<< "Program terminates..."<<endl;
}

int main() {
    
    
    const double small_room_price {25};
    const double medium_room_price {35};
    const double large_room_price {45};
    const double tax_rate {0.06};
    const int valid {30};
    
    
    cout << "Welcome to Johan's Carpet Cleaning Service"<< endl;
    
    int small_rooms {0};
    cout<< "\nHow many small rooms would you like cleaned ? ";
    cin>> small_rooms;
    
    int medium_rooms {0};
    cout<< "How many medium rooms would you like cleaned ? ";
    cin>> medium_rooms;
    
    int large_rooms {0};
    cout<< "How many large rooms would you like cleaned ? ";
    cin>> large_rooms;
    
    cout << "\nYou entered: " <<'['<< small_rooms<<']' << " small rooms." << endl;
    cout << "You entered: " <<'['<< medium_rooms<<']' << " medium rooms."<< endl;  
    cout << "You entered: " <<'['<< large_rooms<<']' << " big rooms."<< endl;    
    cout << endl;
    
    cout<< "Price for small rooms is: [$" <<small_room_price<<']' << endl;
    cout<< "Price for medium rooms is: [$" <<medium_room_price<<']' << endl;
    cout<< "Price for large rooms is: [$" <<large_room_price<<']' << endl;
    
//    cout<< "Total price for small rooms is: $" << small_rooms * small_room_price << endl;
//    cout<< "Total price for large rooms is: $" << large_rooms * large_room_price << endl;

    double total_estimate = ((small_rooms * small_room_price) + (large_rooms * large_room_price) +  (medium_rooms * medium_room_price)) +
        (((small_rooms * small_room_price) + (large_rooms * large_room_price) + (medium_rooms * medium_room_price)) * tax_rate);
    
    cout<< "\n========================================================"<< endl;  
    cout<< "\nTotal estimate ex tax: [$" <<(small_rooms * small_room_price) + (large_rooms * large_room_price) + (medium_rooms * medium_room_price)<<']'<<endl;
    
//    cout<< "Total estimate incl tax: $" 
//    << ((small_rooms * small_room_price) + (large_rooms * large_room_price)) +
//        (((small_rooms * small_room_price) + (large_rooms * large_room_price)) * tax_rate)
//    << endl;
    cout<< "Tax: [$" << ((small_rooms * small_room_price) + (large_rooms * large_room_price) + (medium_rooms * medium_room_price)) * tax_rate<<']'<<endl;
    cout<< "Total estimate incl tax: [$" << total_estimate<<']'<< endl; 
    cout<<"\nEstimate will be valid for " << valid<< " days, hope to see you soon."<< endl;
    cout<< "\n========================================================"<< endl;
  
    shut_down();
    
    
    return 0;
}