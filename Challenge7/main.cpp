#include <iostream>

using namespace std;

int main() {
    
    const int legal_age {16};
    bool has_car {};
    int age {};
    cout << boolalpha;
    
    cout << "Input your age :";
    cin >> age;
    cout << "Do you have a car input 1 for (Yes) or 0 for (No) :";
    cin >> has_car;
    cout << "Your age is " << age <<  endl;
    
    
    if (age >= legal_age) {
        if(has_car){
            cout << "Your car status is set to : " << has_car << endl;
            cout << "Yes, you can drive! your age is " << age << " and you own a car " << endl;
    } 
    else {
            cout << "Your car status is set to : " << has_car << "\nSorry, you need to buy a car before you can drive!";
        }   
    
    } 
    else if(age > 0 && age <=2) {            
            cout << "You are considered as an infant you should suck some titties instead!.";
    }
    else if(age == 0){
        cout << "You don't exist! " << endl;
        cout << "Sorry, come back in " << legal_age - age << " years" << endl;
    }
    else {
        
        cout << "Sorry, come back in " << legal_age - age << " years and be sure you own a car when you come back.";
    }
        return 0;


}