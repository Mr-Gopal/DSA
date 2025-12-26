#include <iostream> 
using namespace std;

int main() {
    int a=15, b=8;

    cout << (a & b) << endl;  // AND
    cout << (a | b) << endl;  // OR
    cout << (a ^ b) << endl;  // XOR
    cout << (a << b) << endl; // left shift
    cout << (a >> b) << endl; // right shift


    // Datatype modifiers (system dependent!)
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;  
    cout << sizeof(short int) << endl;

    cout << sizeof(signed) << endl; // holds +ve and -ve integers
    cout << sizeof(unsigned) << endl; // holds only +ve integer => no need of MSB(most significant bit)
    return 0;
}