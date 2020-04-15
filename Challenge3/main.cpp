#include <iostream>
#include <string>
using namespace std;

void employee_profile() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    int age {0};
    double hourly_wage {23.50};
    string name("");
    
    cout << "Enter your name: " << endl;
    cin >> name;
    
    cout << "Enter your age: " << endl;
    cin >> age;
    
    cout << "Your name is " << name << " and your age is " << age << " and your hourly wage is $" << hourly_wage <<  endl;
    
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age << " " << hourly_wage;
}

int main() {
    
    employee_profile();
    
    return 0;
}