#include<iostream>
using namespace std;

int main() {
    long long num;

    cout << "Enter a number: ";
    cin >> num;

    ((num > 0) && ((2*(double)(num>>1)) == num)) ? cout << "Number Even\n" : cout << "Number is Odd\n";

    if((num > 0) && ((num & (num-1)) == 0)){
        cout << "Number is power of 2";
    } else {
        cout << "Number is not power of 2";
    } 

    return 0;
}

// Algorithm
/*
    why? num > 0  --> ensures the input value is positive

    why? (num & (num-1)) == 0 
    powers of 2
    decimal series <xn> = 2, 4, 8, 16, 32, 64, 128, 256 ...
    decimal-1 <(x-1)n> = 1, 3, 7, 15, 31, 63, ...

    **** x1=2, x2=4,... xn=2^n ****

    binary = 10, 100, 1000, 10000, 100000, ....
    binary-1 = 01, 011, 0111, 01111, 011111

    xn & (x-1)n  --> is always zero!
    

*/