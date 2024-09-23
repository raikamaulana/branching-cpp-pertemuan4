#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) { // perulangan untuk dapat mengetikkan kembali tinggi segitiga
        int n;
        string m;

        cout << "Input tinggi segitiga (angka) atau ketik 'exit' untuk keluar : ";
        getline(cin, m); // getline untuk dapat input lebih dari 1 kata
        cout << endl;

        if (m == "exit"){
            cout << "Program selesai." << endl;
            return 0;
        }

        // Jika yang diinput bukanlah angka, maka pernyataan akan masuk ke dalam blok catch
        try {
            n = stoi(m); // Konversi string ke integer
            if (n < 0) {
                cout << "Tak boleh angka negatif lho" << endl;
            }
        } catch (invalid_argument const &e) {
            cout << "Mohon ketik sebuah angka atau 'exit'\n" << endl;
            continue; // Kembali ke awal loop
        }

        char bintang = '*';

        for (int i = 1; i <= n; i++) {
            for (int j = n; j >= i; j--) {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) {
                cout << bintang << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

return 0;

}
