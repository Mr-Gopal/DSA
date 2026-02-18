#include<iostream>
using namespace std;


int main() {
    // Pointer - variable which stores address of other variable.
    int a = 16;
    int* ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
     
    float amount = 2049.20f;
    float* ptr2 = &amount;
    cout<<ptr2<<endl;
    cout<<&amount<<endl;

    // pointer for another pointer
    int** ptrPtr = &ptr;
    cout<<&ptr<<endl;
    cout<<ptrPtr<<endl;


    // * -> Dereference operator
    cout<<*(&a)<<endl;
    cout<<*ptr<<endl;
    cout<<ptrPtr<<endl;
    cout<<*ptrPtr<<endl;
    cout<<**ptrPtr<<endl;

    // Types of pointers
    // 1. Null pointer -> doesn't point any memory location.
    int** ptr3;
    cout<<ptr3<<endl; // gives garbage address.
    int** ptr4 = NULL;
    cout<<ptr4<<endl;

    return 0;
}