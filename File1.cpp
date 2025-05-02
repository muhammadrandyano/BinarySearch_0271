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

void bubbleSortArray() {
    int pass = 1;
    do {
        for (int j = 0; j <= npanjang - 1 - pass; j++) {
            if (element[j] > element[j + 1]) {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass = pass + 1;
    } while (pass <= npanjang - 1);
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < npanjang; j++) {
        cout << element[j];
        if (j < npanjang - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
}

void binarySearch() {
    cout << "\nMasukkan elemen yang ingin dicari = ";
    cin >> x;

    int low = 0;
    int high = npanjang - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (element[mid] == x) {
            cout << "Ditemukan pada indeks ke-" << mid << endl;
            return;
        }

        if (x < element[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << x << " tidak ditemukan." << endl;
}