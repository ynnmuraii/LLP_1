#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    int freq[256] = { 0 };

    printf("Enter something: ");
    fgets(str, 256, stdin);  

    for (int i = 0; i < strlen(str); i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("The character '%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}