/*
   Increment operator ++
   Decrement operator --
   
   Increment or decrement its operand by 1
   Can be used with int , floating point types and pointers
  
   Prefix ++num
   Postfix num++
*/


#include <iostream>

using namespace std;

int main() {
    
    int counter1 {10};
    int result1 {0};
    int counter2 {10};
    int result2 {0};
    
    // Example 1 - simple increment 
//    cout << "Counter: " << counter << endl;
//    
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//    
//    counter++;
//    cout << "Counter: " << counter << endl;
//    
//    ++counter;
//    cout << "Counter: " << counter << endl;
    
    // Example 2 - preincrement
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = ++counter; // Note the pre increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

    // Example 3 - Post increment
//    counter = 10;
//    result = 0;
//    
//   cout << "Counter: " << counter << endl;
//    
//    result = counter++; // Note the post increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
 
    // Example 4 - Post increment
    counter1 = 10;
    result1 = 0;
    
    cout << "PRE Increment ++COUNTER" << endl;
    cout << "\nCounter: " << counter1 << endl;   
   
    result1 = ++counter1 + 10; // Note the pre increment
    
    cout << "Counter: " << counter1 << endl;
    cout << "Result: " << result1 << endl;
   
   // Example 5
    counter2 = 10;
    result2 = 0;
    
    cout << "\nPOST Increment COUNTER++" << endl;
    cout << "\nCounter: " << counter2 << endl;   
    
    result2 = counter2++ + 10; // Note the post increment
    
    cout << "Counter: " << counter2 << endl;
    cout << "Result: " << result2 << endl;
    
    return 0;
}