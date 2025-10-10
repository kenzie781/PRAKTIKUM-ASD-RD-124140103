#include <iostream>
using namespace std;

// Membuat struktur node untuk menyimpan data siswa 
struct Node {
    char nama[50];
    int nilai;
    Node* next;
};

// Membuat fungsi untuk menyalin nama
void salinNama(char* tujuan, const char* sumber) {
    int i = 0;
    while (sumber[i] != '\0' && i < 49) {
        tujuan[i] = sumber[i];
        i++;
    }
    tujuan[i] = '\0';  // menutup string dengan null-terminator
}

// Memberikan kelas LinkedList untuk menyimpan data siswa secara dinamis
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(NULL) {}

    // Fungsi untuk menyisipkan data baru secara terurut (ascending)
    void tambahData(const char* nama, int nilai) {
        Node* baru = new Node;
        salinNama(baru->nama, nama);
        baru->nilai = nilai;
        baru->next = NULL;

        // Kasus 1: list kosong atau nilai baru lebih kecil dari head
        if (head == NULL || nilai < head->nilai) {
            baru->next = head;
            head = baru;
        } 
        // Kasus 2: cari posisi yang tepat (nilai sebelumnya < nilai baru)
        else {
            Node* temp = head;
            
            // maju sampai menemukan posisi sebelum tempat penyisipan
            while (temp->next != NULL && temp->next->nilai < nilai)
                temp = temp->next;

            // sisipkan node baru di tengah / akhir
            baru->next = temp->next;
            temp->next = baru;
        }
    }
    // Membuat fungsi untuk menampilkan semua data siswa
    void tampilkan() {
        
        if (head == NULL) {// jika list kosong
            cout << "Data masih kosong.\n";
            return;
        }
        // Untuk mengeluarkan daftar nilai yang sudah ada dan data yang telah tersusun secara ascending
        cout << "\n=== Daftar Nilai Siswa (Ascending) ===\n";
        Node* temp = head;
        while (temp != NULL) {          // loop semua node
            cout << "Nama : " << temp->nama << "\n";
            cout << "Nilai: " << temp->nilai << "\n";
            cout << "-------------------\n";
            temp = temp->next;
        }
    }
};


int main() {
    // Melakukn deklarasi untuk beberapa variabel yang akan di gunakan dalam program
    LinkedList list;
    int pilih;
    char nama[50];
    int nilai;
    
     // Memberikan output menu utama menggunakan do while, sehingga pengguna dapat memilih operasi apa yang ingin dilakukan lebih dari sekali
    do {
        cout << "\n=== Sistem Nilai Siswa Dinamis ===\n";
        cout << "1. Tambah Data\n";
        cout << "2. Tampilkan Data\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        cin.ignore();
        
        // Menggunakan switch case untuk melakukan operasi yang sesuai dengan pilihan pengguna
        switch (pilih) {
            case 1:
                cout << "\nMasukkan nama: ";
                cin.getline(nama, 50);  // baca satu baris nama (termasuk spasi)
                cout << "Masukkan nilai: ";
                cin >> nilai;           // baca nilai
                list.tambahData(nama, nilai);  // tambahkan ke list
                break;
            case 2:
                list.tampilkan();
                break;
            case 0:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilih != 0); // ulang sampai user pilih keluar

    return 0;
}
