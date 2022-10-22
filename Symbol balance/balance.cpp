#include "iostream"


char first_symbol = '{';
char second_symbol = '}';


bool balance(const char* str) {
    int i = 0;
    int first_counter = 0;
    int second_counter = 0;

    while (str[i] != '\0') {
        switch (str[i]) {
            case first_symbol: first_counter++;
            case second_symbol: second_counter++;
        }
        i++;
    }

    if (first_counter == second_counter) return true;
    return false;
}

int main() {
    bool b = balance("{Hello}");
    std::cout << b;
    return 0;
}
