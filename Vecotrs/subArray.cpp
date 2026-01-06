#include <iostream>
using namespace std;


int main() {
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int s=0; s<size; s++){
        for (int e=s; e<size; e++){
            for (int i=s; i<=e; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}