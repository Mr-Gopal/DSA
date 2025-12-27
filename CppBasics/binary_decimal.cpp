#include <iostream>

using namespace std;

void decimalToBinary()
{
    long long sum = 0, dnum;
    cout << "Enter the decimal number: ";
    cin >> dnum;
    if (dnum == 0)
    {
        cout << "Binary form is = " << sum << endl;
    }
    else
    {
        long long i = 1;
        while (dnum > 0)
        {
            int binary = dnum % 2;
            sum += binary * i;
            dnum = (long long)dnum / 2;
            i *= 10;
        }
        cout << "Binary form is = " << sum << endl;
    }
}

void binaryToDecimal()
{
    long long i = 1, sum = 0, bnum;
    cout << "Enter the bianry number: ";
    cin >> bnum;
    while (bnum > 0)
    {
        long long decimal = bnum % 10;
        sum += decimal * i;
        bnum = (long long)bnum / 10;
        i *= 2;
    }
    cout << "Decimal form is = " << sum << endl;
}

int main()
{
    int choice;
    cout << "Welcome to the Number System conversion!" << endl
         << "Choose!" << endl;
    cout << "1. Decimal to binary\n"
         << "2. Binary to Decimal\n"
         << "Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        decimalToBinary();
        while (1)
        {
            char choice;
            cout << "Convert again? [y/n]: ";
            cin >> choice;
            if (choice == 'y')
                decimalToBinary();
            else
                break;
        }
    }
    else if (choice == 2)
    {
        binaryToDecimal();
        while (1)
        {
            char choice;
            cout << "Convert again? [y/n]: ";
            cin >> choice;
            if (choice == 'y')
                binaryToDecimal();
            else
                break;
        }
    }
}

// Another version where i used a string to showcase the conversion.
// This method is memory extensive!
/*

int main() {
    int num;
    string str = "";
    cout << "Enter the number: ";
    cin >> num;

    if (num == 0) {
        str = "0";
        cout << "Binary form is = " << str << endl;
    } else {
        while(num>0) {
            int binary = num%2;
            num = (int) num/2;
            str.insert(0, to_string(binary));
        }
        cout << "Binary form is = " << str << endl;
    }

}

*/