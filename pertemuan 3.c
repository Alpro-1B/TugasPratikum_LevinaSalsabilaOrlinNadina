#include<iostream>
  using namespace std;

int main(){

    int nilai; //variabel untuk mendeklarasikan nilai

    cout << "Masukkan nilai anda: "; //output untuk variabel input
    cin >> nilai;//untuk memasukan nilai yg user inginkan

    if(nilai > 90){ //memeriksa nilai apakah lebih besar dari 90
        cout << "Selamat! Anda mendapatkan nilai A"  << endl; //output jika nilai > 90
    } else if (nilai > 80) { //memeriksa nilai apakah lebih besar dari 80
        cout << "Anda mendapatkan nilai B" << endl; //output jika nilai > 80
    } else  if (nilai > 70) { //memeriksa nilai apakah lebih besar dari 70
        cout << "Anda mendapatkan nilai c" << endl; //output jika nilai > 70
    } else  if (nilai > 60) { //memeriksa nilai apakah lebih besar dari 60
        cout << "Anda mendapatkan nilai D" << endl; //output jika nilai > 60
    } else { //memeriksa nilai apakah lebih kecil dari 60
        cout << "Anda mendapatkan nilai E" << endl; //output jika nilai < 60
    }
    return 0; //penutup
}

