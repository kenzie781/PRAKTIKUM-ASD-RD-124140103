#include <iostream>
using namespace std;

void operasiMatematika(int *x, int y, float *z) {
    *x = 0; 
    *z = 1;
    for (int n = 1; n <= y; n++) {
        *x += (n * n);
        *z *= (2 * n - 1);
    }
}

int main() {
    int hasilx, y;
    float hasilz;

    cout << "Masukkan nilai y: ";
    cin >> y;

    operasiMatematika(&hasilx, y, &hasilz);

    cout << "Hasil penjumlahan kuadrat (*x) = " << hasilx << endl;
    cout << "Hasil perkalian bilangan ganjil (*z) = " << hasilz << endl;

    return 0;
}
