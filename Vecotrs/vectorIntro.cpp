#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vector<char> vec2;

    // few properties of vectors
    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(89);
    vec.push_back(54);
    vec.pop_back();
    
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << vec.front() << endl 
         << vec.back() << endl
         << vec.at(1) << endl;

    for (int val: vec) {
        cout << val << " ";
    }

    return 0;
}