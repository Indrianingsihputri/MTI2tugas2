#include <iostream>
using namespace std;

int main() {
    int sukuPertama = 3; // U1
    int beda = 5;        // d
    int n = 20;         // jumlah suku

    // Menghitung suku ke-n
    int sukuKeN = sukuPertama + (n - 1) * beda;

    // Menghitung jumlah n suku pertama
    int jumlahSuku = (n / 2) * (sukuPertama + sukuKeN);

    std::cout << "Jumlah 20 suku pertama dari deret aritmetika adalah: " << jumlahSuku << std::endl;

    return 0;
}