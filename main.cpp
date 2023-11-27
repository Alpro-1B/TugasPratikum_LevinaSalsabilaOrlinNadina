#include <iostream>
using namespace std;

int main() {
    //mendeklarasikan variabel-variabel
    int nilai[100];
    int i, jumlahbil, biltertinggi;

    cout << "-------Program Mencari Nilai Tertinggi Dalam Array-------" << endl;

    //melakukan perintah untuk menginput jumlah bilangan yang diinginkan user
    cout << "Masukkan jumlah bilangan: ";
    cin >> jumlahbil;
    cout << endl;

    //membaca elemen array
    for (i = 0; i < jumlahbil; i++)
    {
        cout << "Indeks bilangan ke-[" << i << "]= ";
        cin >> nilai[i];
    }

    biltertinggi = nilai[0];

    //mencari bilangan tertinggi
    for (i = 0; i < jumlahbil; i++)
    {
        if (biltertinggi < nilai[i])
        {
            biltertinggi = nilai[i];
        }
    }

    //output atau hasil yang ditampilkan
    cout << "Bilangan tertinggi adalah: " << biltertinggi;
    cout << endl;
    return 0;
}
