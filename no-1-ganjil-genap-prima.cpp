#include <iostream>
#include <cmath>
using namespace std;

bool prima(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false; // Digunakan untuk mengecek pembagian dengan i = 2, jika tidak ada sisa bagi, maka bukanlah angka prima
    }
    return true;
}

int main() {
    int batas, jumlahBilGanjil = 0, jumlahBilGenap = 0, jumlahBilPrima = 0;

    cout << "Ketikkan angka untuk membatasi sampai angka tertentu : ";
    cin >> batas;
    cout << endl;

    // Barisan Bilangan Ganjil
    cout << "Bilangan Ganjil (batas sampai angka " << batas << " angka) : ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jumlahBilGanjil += i;
        }
    }

    // jumlah semua bilangan ganjil
    cout << endl;
    cout << "Jumlahnya : " << jumlahBilGanjil << endl;

    // Faktor bilangan ganjil yang ditampilkan
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {

            cout << "Faktor dari " << i << " : ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;

        }
    }

    cout << endl;

    // Barisan Bilangan Genap
    cout << "Bilangan Genap (batas sampai angka " << batas << " angka) : ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahBilGenap += i;
        }
    }

    // jumlah semua bilangan genap
    cout << endl;
    cout << "Jumlahnya : " << jumlahBilGenap << endl;

    // Faktor bilangan genap yang ditampilkan
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {

            cout << "Faktor dari " << i << " : ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;

        }
    }

    cout << endl;

    // Barisan bilangan prima
    cout << "Bilangan Prima (batas sampai angka " << batas << " angka) : ";
    for (int i = 2; i <= batas; i++) {
        if (prima(i)) {
            cout << i << " ";
            jumlahBilPrima += i;
        }
    }

    // jumlah semua bilangan prima
    cout << endl;
    cout << "Jumlahnya : " << jumlahBilPrima << endl;

    // Faktor bilangan prima yang ditampilkan
    for (int i = 2; i <= batas; i++) {
        if (prima(i)) {

            cout << "Faktor dari " << i << " : ";
            for (int j = 1; j <= i; ++j) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;

        }
    }

    return 0;
}
