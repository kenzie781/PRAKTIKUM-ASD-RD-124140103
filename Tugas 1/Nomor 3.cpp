#include <iostream>
using namespace std;


//membuat fungsi void dan menggunakan pointer untuk variabel yang akan digunakan dalam pengoperasian
void BalikArray(int *arr, int n) {
    //menginisialisasi variabel sebagai penanda awal dan akhir sebagai acuan pada saat di lakukan pemutaran
    int *ptra = arr;
    int *ptrb = arr + n - 1;
    //menggunakan while untuk menjalankan program sesuai kondisi yang diinginkan sehingga dapat dilakukan pemutaran elemen yang sesuai dengan urutannya dari awal ke akhir dan akhir ke awal  
    while (ptra < ptrb) {
        int temp = *ptra;
        *ptra = *ptrb;
        *ptrb = temp;
        ptra++;
        ptrb--;
    }
}




int main() {


    //mendeklarasikan variabel yang akan digunakan dan membuat 1 array untuk menampung jumlah elemen yang akan dimasukkan sesuai dengan keinginan pengguna
    const int MAX = 100; // kapasitas maksimum array
    int arr[MAX];
    int n;


    //meminta input ukuran array yang diinginkan oleh pengguna untuk menampung input elemen dari pengguna
    cout << "Masukkan ukuran array (maksimal 100): ";
    cin >> n;


    //menggunakan if untuk mendeteksi jika pengguna memasukkan ukuran array melebihi batas maksimal yang telah di tentukan untuk ukuran arraynya
    if (n > MAX) {
        cout << "Ukuran array terlalu besar! Maksimal " << MAX << endl;
        return 1;
    }


    //memberikan keluaran yang meminta pengguna untuk memasukkan elemen yang diinginkan sesuai dengan jumlah ukuran array sebelumnya telah diberikan menggunakan for
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    //menampilkan urutan elemen sesuai dengan jumlah array yang telah ditentukan sebelum dilakukan pemutaran uruan
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //melakukan pemanggilan fungsi void yang telah di buat pada awal program untukmelakukan pembaikan urutan array yang telah di berikan sebelumnya
    BalikArray(arr, n);


    //menampilkan elemen sesuai array yang ada namun dengan urutan yang telah di balik menggunakan fungsi void dari program yang telah di buat di awal
    cout << "Array setelah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
