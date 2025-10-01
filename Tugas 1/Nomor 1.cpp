#include <iostream>
using namespace std;


//membuat subprogram void dan menggunakan pointer untuk menyimpan parameter dari variabel x
void jmlhBilGanjil(int *x, int y) {
    *x = 0;
    //mengunakan for untuk melakukan penjumlahan sesuai dengan nili yang akan di masukkan oleh pengguna
    for (int i = 1; i <= y; i++) {
        if (i % 2 != 0) {
            *x += i;
        }
    }
}


int main() {
    int hasil, y;

    //memberikan keluaran untukmemint input dari pengguna untuk nilai y
    cout << "Masukkan nilai y: ";
    cin >> y;

    //mendeklarasikan variabel yang akan di gunakan ke dalampointer yang telah di buat sebelumnya
    jmlhBilGanjil(&hasil, y);

    //memberikan output hasil perhitungan yang telah di lakukan oleh program
    cout << "Jumlah bilangan ganjil dari 1 sampai " << y << " = " << hasil << endl;
    return 0;
}
