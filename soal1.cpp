#include <iostream>
using namespace std;

int main() {
    int data[2][3][4];
    int hasil[3][4];

    int ganjil = 1;
    int kelipatan5 = 5;

    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 4; kolom++) {
            data[0][baris][kolom] = ganjil;
            data[1][baris][kolom] = kelipatan5;

            ganjil += 2;
            kelipatan5 += 5;
        }
    }

    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 4; kolom++) {
            if (data[0][baris][kolom] > data[1][baris][kolom]) {
                hasil[baris][kolom] = data[0][baris][kolom];
            } else {
                hasil[baris][kolom] = data[1][baris][kolom];
            }
        }
    }

    cout << "Tabel nilai maksimal:\n";
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 4; kolom++) {
            cout << hasil[baris][kolom] << "\t";
        }
        cout << endl;
    }
    return 0;
}