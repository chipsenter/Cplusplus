#include <iostream>
using namespace std;

void date_of_birth() {
    int m {};
    int d {};
    int y {};
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //---- WRITE YOUR CODE BELOW THIS LINE----
    
    cout<< "Enter the date in mm/dd/yyyy : \n";
    cin >> m;
    cin >> d;
    cin >> y;

        
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- Do NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "Todays date is : " << m << " " << d << " " << y;
}

int main(){
    
    date_of_birth();
}