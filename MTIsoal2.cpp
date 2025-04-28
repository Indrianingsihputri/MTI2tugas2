#include <iostream>

int main() {
    int totalKursi = 0;
    int barisPertama = 25;
    int jumlahBaris = 15;
    int tambahanPerBaris = 3;

    for (int i = 0; i < jumlahBaris; i++) {
        totalKursi += barisPertama + (i * tambahanPerBaris);
    }

    std::cout << "Total jumlah kursi dalam gedung pertemuan: " << totalKursi << std::endl;

    return 0;
}