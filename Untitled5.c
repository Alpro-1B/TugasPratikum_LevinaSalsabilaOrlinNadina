#include <iostream>

using namespace std;

int main()
{
    //double digunakan untuk memasukkan bilangan desimal
    double angka1, angka2, angka3;

    //meminta input angka1 pada user
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    //meminta input angka2 pada user
    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    //meminta input angka3 pada user
    std::cout << "Masukkan angka ketiga: ";
    std::cin >> angka3;

    //pencarian angka terbesar
    //logika && gigunakan untuk mencari salah satu angka terbesar dari kedua angka sisanya
    //jika angka1 lebih besar dari kedua sisa angkanya
    if (angka1 >= angka2 && angka1 >= angka3) {
        //tampilkan angka1
        std::cout << "Angka terbesar adalah: " << angka1 << std::endl;
    //jika angka2 lebih besar dari kedua sisa angkanya
    } else if (angka2 >= angka1 && angka2 >= angka3) {
        //tampilkan angka2
        std::cout << "Angka terbesar adalah: " << angka2 << std::endl;
    //jika angka2 lebih besar dari kedua sisa angkanya
    //tampilkan angka3
    } else {
        std::cout << "Angka terbesar adalah: " << angka3 << std::endl;
    }

    return 0;
}
