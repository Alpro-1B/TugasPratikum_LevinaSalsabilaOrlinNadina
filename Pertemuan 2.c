#include <iostream>

using namespace std;

int main() {
    // Tugas NO 2

    int N,M,B,S;

cout << "-----------------------" << endl;
cout << "Masukkan jumlah bebek: "; cin >> N;
cout << "Masukkan jumlah teman: "; cin >> M;
cout << "-----------------------" << endl;

B = N / M;
S = N % M;

cout << endl;
cout << "Banyak bebek untuk 1 orang teman: " << B << endl;
cout << "Sisa bebek: " << S << endl << endl;
    return 0;
}
