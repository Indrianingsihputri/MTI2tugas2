#include <iostream>
#include <cmath> // Untuk fungsi pow

using namespace std;

int main() {
    // Inisialisasi suku pertama dan rasio
    int a1 = 4; // Suku pertama
    int r = 2;  // Rasio
    int n = 4;  // Suku ke-n yang ingin dicari

    // Menghitung suku ke-n
    int an = a1 * pow(r, n - 1);

    // Menampilkan hasil
    cout << "Suku ke-" << n << " dari deret geometri adalah: " << an << endl;

    return 0;
}