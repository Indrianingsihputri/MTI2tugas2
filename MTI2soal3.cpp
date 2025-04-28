#include <iostream>

int main() {
    int sukuPertama = 7; // a
    int beda = 5;        // d
    int n = 52;         // suku ke-n

    // Menghitung suku ke-n
    int sukuKeN = sukuPertama + (n - 1) * beda;

    std::cout << "Suku ke-52 dari barisan bilangan adalah: " << sukuKeN << std::endl;

    return 0;
}
// Output: Suku ke-52 dari barisan bilangan adalah: 256