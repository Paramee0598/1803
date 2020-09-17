#include <stdio.h>
int main() {
    int i, j;
    char input, alphabet = 'a';
    char Alphabet = 'A';
    printf("Enter an a-z OR A-Z row: ");
    scanf_s("%c", &input);
    if (input >= 'a' & input <= 'z' || input >= 'A' & input <= 'Z') {
    printf("*\n");
    if (input >= 'a' & input <= 'z'){
        for (i = 1; i <= (input - 'a' + 1); ++i) {
            for (j = 1; j <= i; ++j) {
                printf("%c ", Alphabet);
                printf("%c ", alphabet);
            }
            ++Alphabet;
            ++alphabet;
            printf("\n");
        }
    }
    if(input >= 'A' & input <= 'Z') {
        for (i = 1; i <= (input - 'A' + 1); ++i) {
            for (j = 1; j <= i; ++j) {
                printf("%c ", Alphabet);
                printf("%c ", alphabet);
            }
            ++Alphabet;
            ++alphabet;
            printf("\n");
        }
    }
    }
    else printf("Error ");
    return 0;
}