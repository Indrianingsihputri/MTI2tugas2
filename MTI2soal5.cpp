#include <iostream>

int main() {
    int totalKelipatan = 0;

    // Rentang dari 200 hingga 400
    for (int i = 200; i <= 400; i++) {
        // Cek apakah i adalah kelipatan 3 atau 5
        if (i % 3 == 0 || i % 5 == 0) {
            totalKelipatan += i; // Tambahkan ke total
        }
    }

    std::cout << "Jumlah kelipatan 3 dan 5 antara 200 dan 400 adalah: " << totalKelipatan << std::endl;

    return 0;
}