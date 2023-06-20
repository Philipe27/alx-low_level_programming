#include <stdio.h>

int main() {
    int digit = 0;

    // Print numbers 0-9
    while (digit < 10) {
        putchar(digit + '0');
        digit++;
    }

    // Reset digit to 0
    digit = 0;

    // Print lowercase letters a-f
    while (digit < 6) {
        putchar(digit + 'a');
        digit++;
    }

    // Print a newline character
    putchar('\n');

    return 0;
}
