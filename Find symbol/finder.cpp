#include <iostream>

int find(const char* str, const char* symbol) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] == symbol[0]) return index;
        index++;
    }
    return -1;
}


int main() {
    std::cout << find("Hello world", "l");
    return 0;
}
