#include <stdio.h>

int main() {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(EOF);
        c = getchar();
    }
}