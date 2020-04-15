/* Challenge section 8
 * 
 * In the US:
 * 1 dollar is 100 cents
 * 1 quarter is 25 cents
 * 1 dime is 10 cents
 * 1 nickel is 5 cents, and
 * 1 penny is 1 cent
 * 
  * */
 
 


#include <iostream>

using namespace std;

int main() {
    
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
    
    cout << "Enter the amount in cents: ";
    cin >> change_amount;
    cout << "You entered " << change_amount << " cents" << endl;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;
    
    pennies = balance;
    
    cout <<"\n< You can provide this change as follows > " << endl;
    cout << "=========================================" << endl;
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "pennies  : " << pennies << endl;
    cout << "=========================================";
    cout << endl;
    
    
    
    
    return 0;
}