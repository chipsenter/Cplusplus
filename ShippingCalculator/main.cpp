/*
 * Shipping cost calculator 
 *
 * Ask the user for package dimension in inches
 * length, width, height - these should be integers
 * 
 * All dimension must be 10 inches or less or we cannot ship it
 * 
 * Base cost $2.50
 * If package volume is greater than 100 cubic inches there is a 10% surcharge
 * If package volume is greater than 500 cubic insches there is a 25% surcharge
 * 
*/



#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    int length{}, width{}, height{};
    double base_cost {2.50};
    
    const int volume_limit1 {100};
    const int volume_limit2 {500};
    
    int max_dim_length {10};
    
    double volume_surcharge1 {0.10};      // 10% extra
    double volume_surcharge2 {0.25};      // 25 % extra
    
    // All dimensions must be 10 inches or less
    
    int package_volume{};
    
    cout << "Welcome to the package shipping cost calculator" << endl;
    cout << "\nEnter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    if (length > max_dim_length || width > max_dim_length || height > max_dim_length) {
        cout << "Sorry, package rejected - dimension exceeded!" << endl;
    }
    else {
        
        double package_cost {};
        package_volume = length * width * height;
        package_cost = base_cost;
        
        if (package_volume > volume_limit2) {
            package_cost += package_cost * volume_surcharge2;
            cout << "Adding volume 2 surcharge" << endl;
            
        } else if (package_volume > volume_limit1) {
            package_cost += package_cost * volume_surcharge1;
            cout << "Adding volume 1 surcharge" << endl;
        }
        
        cout << fixed << setprecision(2); // prints dollars nicely !
        cout << "The volume of your package is: " << package_volume << " cubic inch" << endl;
        cout << "======================================================" << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;
        
    }
        
        cout << endl;
    
    return 0;
}