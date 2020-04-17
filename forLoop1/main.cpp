#include <iostream>
#include <vector>


using namespace std;

int main() {
    
 int score1 [] {10,90,87};
 int score2 [] {10,20,30,40,50};
   
    cout << "============ Loop 1 example ==================" << endl;
 
    for (int i {0}; i <  3; i++ ){
        cout << "Iteration :" << i +1 << " " << score1[i] << endl;
    }
    
    cout << "============ Loop 2 example ==================" << endl;
    
    
    for (int y {0}; y <=  5 -1; y++ ){                                                  // If you use less than or equals to-  remember to minus 1 ! otherwise you will output rubbish
    cout << "Iteration :" << y +1 << " " << score2[y] << endl;
    }
    
    cout << "============ Loop 3 example ==================" << endl;

    for (int z {1}, x {5}; z <= 10; ++z, ++x){
        cout << z << " * " << x << " : " << (z * x) << endl;
    }
    
    cout << "============ Loop 4 example ==================" << endl;
    
    // Counting backwards 
    for (int i {10}; i > 0; i--) {
        cout << i << endl;
        
    } cout << "Blastoff!" << endl;
    
    cout << "============ Loop 5 example ==================" << endl;
    
    // Counting from 1
    for (int i {1}; i < 10; i++) {
    cout << i << endl;
    }
    
    cout << "============ Loop 6 example ==================" << endl;
    
    for (int i{10}; i <=100; i+=10) {
        if(i % 2 == 0)
            cout << i << endl;
    }

     cout << "============ Loop 7 example ==================" << endl;
     
     for (int i{1}; i <=100; ++i){
         cout << i;
         if(i % 5 == 0)
             cout << endl;
         else 
             cout << " ";
     }
     
     cout << "============ Loop 8 example ==================" << endl;
     
     // Conditional Operator 
     for (int i{1}; i <=100; ++i){
        
         cout << i << ((i % 5 ==0) ? "\n" : " ");
     }
     
     cout << "============ Loop 9 example ==================" << endl;
     
     vector <int> nums {10,20,30,40,50};
     for(unsigned i {0}; i <= nums.size() -1; ++i){
         cout << "Iteration: " << i + 1 << " : " << nums[i] << endl;
     }
     
     cout << "============ Loop 10 example ==================" << endl;
     
     vector <string> name {"Johan","Heidi","Sarah","Emma"};
     
     for(unsigned i {0}; i <= name.size() -1; ++i){
         cout << "Iteration: " << i + 1 << " : " << name[i] << endl;
     }
     
     cout << "============ Loop 11 example ==================" << endl;
     
    int sum {};
    
    for(int i{1}; i <=15; ++i) {
        
        if(i % 2 != 0) {
            sum += i;
            cout << "Value in sum is: " << sum << endl;
            
        }
        
    }
     
    return 0;
}

