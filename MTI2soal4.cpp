#include <iostream>

int main() {
    int sukuTengah = 30; // U_t
    int totalDeret = 450; // S_n

    // Menghitung U1 + Un
    int U1_plus_Un = 2 * sukuTengah; // U1 + Un = 2 * U_t

    // Menghitung jumlah suku n
    int n = totalDeret / (U1_plus_Un / 2); // S_n = n/2 * (U1 + Un)

    std::cout << "Jumlah suku yang terdapat pada deret aritmetika adalah: " << n << std::endl;

    return 0;
}