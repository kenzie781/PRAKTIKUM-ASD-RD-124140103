#include <iostream>
using namespace std;

//membuat fungsi void dan menggunakan pointer untuk menyimpan nilai dari variabel x dan z
void operasiMatematika(int *x, int y, float *z) {
    //mendeklarasikan nilai untuk alamat pointer x dan z
    *x = 0; 
    *z = 1;
    // menggunakan for untuk melakukan perhitungan dari penjumlahan x dan z sesuai dengan ketentuannya yakni menghitung dari 1 hingga y yang akan diinputkan oleh pengguna
    for (int n = 1; n <= y; n++) {
        *x += (n * n);
        *z *= (2 * n - 1);
    }
}


int main() {
    //mendeklarasikan beberapa variabel yang akan di gunakan pada bagian selanjutnya
    int hasilx, y;
    float hasilz;

    //memberikan keluaran untuk meminta input nilai y dari pengguna
    cout << "Masukkan nilai y: ";
    cin >> y;

    //melakukan pemanggilan pointer dengan variabel yang di gunakan
    operasiMatematika(&hasilx, y, &hasilz);

    //memberikan keluaran hasil dari perhitungan yang sesuai dengan ketentuan dan nilaiy yang telah di masukkanoleh pengguna
    cout << "Hasil penjumlahan kuadrat (*x) = " << hasilx << endl;
    cout << "Hasil perkalian bilangan ganjil (*z) = " << hasilz << endl;

    return 0;
}
