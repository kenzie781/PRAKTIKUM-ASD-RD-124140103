#include <iostream>
using namespace std;

void jmlhBilGanjil(int *x, int y) {
    *x = 0; 
    for (int i = 1; i <= y; i++) {
        if (i % 2 != 0) {
            *x += i;
        }
    }
}

int main() {
    int hasil, y;
    cout << "Masukkan nilai y: ";
    cin >> y;

    jmlhBilGanjil(&hasil, y);

    cout << "Jumlah bilangan ganjil dari 1 sampai " << y << " = " << hasil << endl;
    return 0;
}
