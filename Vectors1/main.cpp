#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    vector <int> test_scores {100,65,33};    
    vector <double> temperatures (365, 80.0);
        
        test_scores.push_back(80);  // Index 3
        test_scores.push_back(90);  // Index 4
        cout << test_scores[0] << endl;
        cout << test_scores[1] << endl;
        cout << test_scores[2] << endl;
        cout << test_scores[3] << endl;
        cout << test_scores.at(4)<< endl;
        //cout << test_scores[5] << endl; // out of range
        //cout << test_scores.at(6) << endl; // out of range
        
    return 0;
}