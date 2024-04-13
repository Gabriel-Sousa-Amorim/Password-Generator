#include <stdio.h>
#include <random>
#include <cstring>

int main() {
    srand((unsigned) time(NULL));
    int size = 15, i = 0;
    char letters[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzÇç";
    char numbers[] = "0123456789";  
    char symbols[] = "!@#$%&*()-_+=^{}[];:?";
    char password[size] = "";
    while (i<=size) {
        int a = 1 + rand() % strlen(letters);
        i++;
        switch(1 + rand() % 3) {
            case 1:   
                printf("%c", letters[1 + rand() % (strlen(letters) - 1)]);
                break;
            case 2:  
                printf("%c", numbers[1 + rand() % (strlen(numbers) - 1)]);
                break;
            case 3:  
                printf("%c", symbols[1 + rand() % (strlen(symbols) - 1)]);
                break;
        }
    }
    printf("\n");
}
