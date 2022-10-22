#include <iostream>

int main() {
    double result = 1.0;
    int repetition = 0, i;
    std::cout << "How much? ";
    std::cin >> repetition;

    for (i = 0; i < repetition; i++) {
        result = 1 + 1 / result;
    }

    std::cout << result;

    return 0;
}
