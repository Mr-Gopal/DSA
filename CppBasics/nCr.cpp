#include <iostream>

using namespace std;

long factorial(int num)
{
    long fact = 1;
    if (num == 0 || num == 1)
        return 1;

    while (num > 0)
    {
        fact *= num;
        num--;
    }
    return fact;
}

int main()
{
    int n, r;
    cout << "You got nCr calculator." << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    if (r > n)
    {
        cout << "nCr is not executable!";
    }
    else
    {
        int nCr = factorial(n) / (factorial(r) * factorial(n - r));
        cout << "nCr = " << nCr;
    }
}
