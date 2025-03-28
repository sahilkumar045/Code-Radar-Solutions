#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Keep non-alphabetic characters unchanged
        else {
            encrypted[i] = ch;
        }
    }
    encrypted[strlen(message)] = '\0'; // Null-terminate the string
}

int main() {
    char message[100];
    int shift;
    char encrypted[100];

    // Read the input message
    scanf(" %[^\n]s", message); // Read entire line including spaces

    // Read the shift value
    scanf("%d", &shift);

    // Normalize the shift to the range [0, 25]
    shift = shift % 26;
    if (shift < 0) shift += 26; // Handle negative shifts

    // Call the Caesar Cipher function
    caesarCipher(message, shift, encrypted);

    // Output the encrypted message
    printf("%s\n", encrypted);

    return 0;
}
