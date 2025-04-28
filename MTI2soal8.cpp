#include <iostream>
#include <vector>

int main() {
    int n; // Jumlah suku yang ingin dihitung
    std::cout << "Masukkan jumlah suku yang ingin dihitung: ";
    std::cin >> n;

    std::vector<int> deret(n);
    deret[0] = 3; // Suku pertama

    // Menghitung suku-suku berikutnya
    for (int i = 1; i < n; i++) {
        if (i == 1) {
            deret[i] = deret[i - 1] * 2; // U2
        } else if (i == 2) {
            deret[i] = deret[i - 1] * 2; // U3
        } else {
            deret[i] = deret[i - 1] * (1.5 + (i - 2) * 0.75); // U4 dan seterusnya
        }
    }

    // Menampilkan deret
    std::cout << "Deret: ";
    for (int i = 0; i < n; i++) {
        std::cout << deret[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}