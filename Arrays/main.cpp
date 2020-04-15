#include <iostream>

using namespace std;

int main() {
    
    int test_scores [5] {75, 87,92,69,99};
    
    cout<< "Test score at index 0: " << test_scores[0] << " points" << endl;
    cout<< "Test score at index 1: " << test_scores[1]  << " points"<< endl;
    cout<< "Test score at index 2: " << test_scores[2] << " points"<< endl;
    cout<< "Test score at index 3: " << test_scores[3] << " points"<< endl;
    cout<< "Test score at index 4: " << test_scores[4] << " points"<< endl;
    
    test_scores[1] = 55;
    
    cout<< "\n=================================================" << endl;
    
    cout<< "\nTest score at index 0: " << test_scores[0] << " points" << endl;
    cout<< "Test score at index 1: " << test_scores[1]  << " points"<< endl;
    cout<< "Test score at index 2: " << test_scores[2] << " points"<< endl;
    cout<< "Test score at index 3: " << test_scores[3] << " points"<< endl;
    cout<< "Test score at index 4: " << test_scores[4] << " points"<< endl;
    
    test_scores[4] = 91;
    test_scores[2] = 50;
    test_scores[1] = 40;
    
    cout<< "\n=================================================" << endl;
    
    cout<< "\nTest score at index 0: " << test_scores[0] << " points" << endl;
    cout<< "Test score at index 1: " << test_scores[1]  << " points"<< endl;
    cout<< "Test score at index 2: " << test_scores[2] << " points"<< endl;
    cout<< "Test score at index 3: " << test_scores[3] << " points"<< endl;
    cout<< "Test score at index 4: " << test_scores[4] << " points"<< endl;
    
    return 0;
}