#include<iostream>
using namespace std;

void changeX(int x) { // pass by value
    x = 404;
}

// Concept - function overloading
void changeX(int* ptr) { // pass by reference
    *ptr = 404;
}

int main() {
    int x = 200;
    changeX(x);
    cout<<"inside main fn: "<<x<<endl;
    
    changeX(&x);
    cout<<"inside main fn: "<<x<<endl;
    return 0;
}