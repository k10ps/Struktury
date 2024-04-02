#include <iostream>
#include <fstream>
#include <random>

void writeRandomNumbersToCSV(const std::string& filename, int numberOfLines) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Nie można otworzyć pliku do zapisu." << std::endl;
        return;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 2147483647);

    for (int i = 0; i < numberOfLines; ++i) {
        file << dist(gen) << std::endl;
    }

    file.close();
}

int main() {
    std::string filename = "random_numbers.csv";
    int numberOfLines = 5000; // Możesz zmienić tę wartość na dowolną, aby uzyskać więcej lub mniej linii z losowymi liczbami

    writeRandomNumbersToCSV(filename, numberOfLines);
    std::cout << "Wygenerowano i zapisano " << numberOfLines << " losowych liczb do pliku: " << filename << std::endl;

    return 0;
}