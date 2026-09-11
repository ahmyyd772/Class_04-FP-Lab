#include <stdio.h>
#include <ctype.h>

int main() {

    char ch, lower;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the entered character is an alphabet
    if (!isalpha(ch)) {
        printf("Error: Please enter an alphabet character.\n");
    }
    else {

        // Convert character to lowercase
        lower = tolower(ch);

        switch (lower) {

            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a Vowel\n", ch);
                break;

            default:
                printf("%c is a Consonant\n", ch);
        }
    }

    return 0;
}