#include<iostream>
using namespace std;

void changeX(int x) { // pass by value
    x = 404;
}

// Concept - function overloading
void changeX(int* ptr) { // pass by reference
    *ptr = 404;
}

// Note- pass by reference can also be done using alias
/*
void changeX(int &x) {
    x = 30;
}
changeX(x);
*/

int main() {
    int x = 200;
    changeX(x);
    cout<<"inside main fn: "<<x<<endl;
    
    changeX(&x);
    cout<<"inside main fn: "<<x<<endl;
    return 0;
}