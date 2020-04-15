#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector1;
    vector <int> vector2;
     
    cout << "\nNumbers in Vector1: " << endl;

    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Index 1 is : " << vector1.at(0) << endl;
    cout << "Index 2 is : " << vector1.at(1) << endl;
    
    cout << "\nThere are " << vector1.size() << " scores in the vector1" << endl;
    cout << "=====================================================" << endl;
    cout << "\nNumbers in Vector2: " << endl;
 
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Index 1 is : " << vector2.at(0) << endl;
    cout << "Index 2 is : " << vector2.at(1) << endl;
    
     cout << "\nThere are " << vector1.size() << " scores in the vector2" << endl;
     cout << "=====================================================" << endl;
     
     vector <vector <int>> vector_2d;
     vector_2d.push_back(vector1);
     vector_2d.push_back(vector2);
     
     cout << "\nIndex 1 in your 2D vector is : " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
     cout << "Index 2 in your 2D vector is : " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
     
     vector1.at(0) = 1000; 
     cout << "\nAfter changing vector1 index 1 result below" << endl;
     cout << "Index  1 in your 2D vector is : " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
     cout << "Index 2 in your 2D vector is : " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
     
     cout << "\nIndex 1 is: " << vector1.at(0) << endl;
     cout << "Index 2 is: " << vector1.at(1) << endl;
     cout << "There are " << vector1.size() << " scores in the vector1" << endl;
     
     
     
     
     
     
    return 0;
}