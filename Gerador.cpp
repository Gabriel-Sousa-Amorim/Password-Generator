#include <iostream>
#include <random>
#include <time.h>
#include <unordered_map>

int main() {
    srand((unsigned) time(NULL));
    std::string letters = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzÇç", numbers = "0123456789",  symbols = "!@#$%&*()-_+=^{}[];:?", password = "";
    int i = 0, size = 15;
    while (i < size) {
        i++;
        switch (1 + rand() % 3)  {
        case (1):
            password += (letters[0 + rand() % letters.length()]);
            break;
        case (2):
            password += (numbers[0 + rand() % numbers.length()]);
            break;
        case (3):
            password += (symbols[0 + rand() % symbols.length()]);
            break;
        };
    };
    std::cout << password << "\n";
};
