#include <stdio.h>
int main() {
    int i, j;
    char input, alphabet = 'a';
    char Alphabet = 'A';
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf_s("%c", &input);
    if (input >= 'a' & input <= 'z' || input >= 'A' & input <= 'Z') {
    printf("*\n");
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
    else printf("Error ");
    return 0;
}