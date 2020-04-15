#include <iostream>

using namespace std;

int main() {
    
    char selection {'A'};
    int num {11};
    int health{};
    int player_healed{};
    
    cout << "What's your health status ? Input number between (1-100)" << endl;
    
    if (selection == 'A') {
        cout << "You selected character A " << endl;
    } 
    else {
        cout << "Character not matching" << endl;
    }
    if (num > 10){
        cout << "Number is greater than 10 " << endl;
    }
    if (health >= 100 && player_healed) {
        cin >> health;
//        health = 100;
        cout << "Your health is at : " << health << " %" << endl;
    } else {
        cout << "Your health is at " << player_healed << " not healed yet , you should rest" << endl;
        }
    return 0;
}