#include <iostream>
using namespace std;

int element[10];
int npanjang;
int x;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal 20): ";
        cin >> npanjang;
        if (npanjang <= 20) {
            break;
        } else {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }

    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < npanjang; i++) {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}