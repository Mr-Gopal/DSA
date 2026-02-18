#include<iostream>
#include<vector>
using namespace std;


int main() {
    int a = 587;
    int* ptr = &a;

    cout<<ptr<<" -> original"<<endl;
    ptr++; //+4 byte because of int datatype in hexadecimal number system
    cout<<ptr<<" -> increment +4"<<endl;
    ptr--;
    cout<<ptr<<" -> decrement -4"<<endl;

    ptr += 4;
    cout<<ptr<<" -> incremnet +16 -> 4*4=16 byte"<<endl;


    // Array - contiguous memory
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout<<*arr<<endl; //arr[0]
    cout<<*(arr+1)<<endl; //arr[1]
    cout<<*(arr+2)<<endl; //arr[2]
    cout<<*(arr+3)<<endl; //arr[3] 
    cout<<*(arr+4)<<endl; //arr[4]
    cout<<*(arr+5)<<endl; //arr[5]


    // Addition is not allowed on pointers => ptr1 + ptr2 X
    // Subtraction - gives the no. of intermidiate blocks
    int* ptr2;
    int* ptr1 = ptr2 + 2;
    cout<<ptr2-ptr1<<endl;
    
    // Relational operators
    cout<<(ptr1 < ptr2)<<endl;
    cout<<(ptr1 > ptr2)<<endl;
    cout<<(ptr1 == ptr2)<<endl;
    cout<<(ptr1 != ptr2)<<endl;

    return 0;
}