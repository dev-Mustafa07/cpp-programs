#include <iostream>
#include <vector> // *IMP to import the file of vector
using namespace std;

int main()
{ 
    vector<int> vec; // Create an empty array
    vector<int> vec2 = {1,2,3}; // Create an with elements
    vector<int> vec3 (3 ,0); // Create an with same elements and specific size

    
    cout << "Very first size of vector(before pushing): " << vec.size() << endl;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "After pushing element in vector: " << vec.size() << endl;
    vec.pop_back();
    cout << "Front and back" << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;
    return 0;
}