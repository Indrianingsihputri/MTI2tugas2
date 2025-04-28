#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int total = 33; // Jumlah ketiga bilangan
    int hasilKali = 1232; // Hasil kali ketiga bilangan

    // Menghitung suku tengah
    int a = total / 3; // Suku tengah

    // Menghitung d
    int d_squared = a * a - (hasilKali / a); // d^2 = a^2 - (hasilKali / a)
    int d = static_cast<int>(sqrt(d_squared)); // Menghitung d

    // Bilangan yang ditemukan
    int bilangan1 = a - d;
    int bilangan2 = a;
    int bilangan3 = a + d;

    // Menentukan bilangan terkecil
    int bilanganTerkecil = std::min(bilangan1, std::min(bilangan2, bilangan3));

    std::cout << "Bilangan terkecil adalah: " << bilanganTerkecil << std::endl;

    return 0;
}