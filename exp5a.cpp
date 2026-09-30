#include <iostream>
using namespace std;

int main() {
    int c[11];

    cout << "Enter received 11-bit Hamming code: ";
    for (int i = 0; i < 11; i++) {
        cin >> c[i];
    }

    int p1 = c[10] ^ c[8] ^ c[6] ^ c[4] ^ c[2] ^ c[0];
    int p2 = c[9]  ^ c[8] ^ c[5] ^ c[4] ^ c[1] ^ c[0];
    int p4 = c[7]  ^ c[6] ^ c[5] ^ c[4];
    int p8 = c[3]  ^ c[2] ^ c[1] ^ c[0];

    int errorPos = p1 * 1 + p2 * 2 + p4 * 4 + p8 * 8;

    if (errorPos == 0) {
        cout << "No error detected." << endl;
    } else {
        cout << "Error detected at position: " << errorPos << endl;

        int index = 11 - errorPos;

        c[index] = c[index] ^ 1;

        cout << "Corrected code: ";
        for (int i = 0; i < 11; i++) {
            cout << c[i];
        }
        cout << endl;
    }

    cout << "Original data bits: ";
    cout << c[8] << c[6] << c[5] << c[4] << c[2] << c[1] << c[0];

    return 0;
}
