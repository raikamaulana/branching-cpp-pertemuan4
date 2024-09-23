#include <iostream>
using namespace std;

int main() {
    int batasan;
    int bilPertama, bilKedua, hasil;

    cout << "Masukkan angka pertama untuk deret fibonacci : ";
    cin >> bilPertama;

    // jika suku pertama 0 maka suku kedua 1, jika tidak 0 maka suku keduanya adalah suku pertama
    bilKedua = bilPertama == 0 ? 1 : bilPertama;

    cout << "Ketikkan angka untuk jumlah suku dari deret fibonacci : ";
    cin >> batasan;
    cout << endl;



    cout << "Deret Fibonacci: " << bilPertama << ", " << bilKedua;

    for (int i = 2; i < batasan; i++) {
        hasil = bilPertama + bilKedua;
        cout << ", " << hasil;

        // Update nilai bilPertama dan bilKedua
        bilPertama = bilKedua;
        bilKedua = hasil;
    }

    cout << endl;
    return 0;
}
