#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << "\nRight triangle (left corner) using WHILE loop:\n";
    int i = 1;
    while (i <= height) {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nRight triangle (right corner) using FOR loop:\n";
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nInverted equilateral triangle using DO WHILE loop:\n";
    int i_inv = height;
    do {
        int spaces = height - i_inv;
        while (spaces > 0) {
            cout << " ";
            spaces--;
        }
        int j = 1;
        do {
            cout << "*";
            if (j < i_inv) {
                cout << " ";
            }
            j++;
        } while (j <= i_inv);
        cout << endl;
        i_inv--;
    } while (i_inv > 0);

    cin.ignore();
    
    _pause();
    return 0;
}