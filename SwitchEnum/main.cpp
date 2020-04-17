#include <iostream>

using namespace std;

int main() {
    
    enum Direction {
        left,right,up,down
    };
    
    //cout << "What direction are you walking ? Enter either left,right,up,down ";
    Direction heading {right};
  
    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        default:
            cout << "OK all good" << endl;
        
    }
    
    return 0;
}