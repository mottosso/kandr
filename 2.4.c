#include <stdio.h>


int main() {
    char esc1;
    esc1 = '\\';

    char esc2 = '\\';
    printf("%c\n", esc2);

    // String, with 6 indexes
    char esc3[6] = "hello";
    printf("%c\n", *esc3);  // Prints the first character
    printf("%s\n", esc3);
}