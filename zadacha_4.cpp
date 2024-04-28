#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("numbers.txt");

    double num1, num2, num3;
    inputFile >> num1 >> num2 >> num3;

    double maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }

    if (num3 > maxNum) {
        maxNum = num3;
    }

    std::cout << "Най-голямото число е: " << maxNum << std::endl;

    inputFile.close();

    return 0;
}
