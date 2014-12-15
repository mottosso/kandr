// Detab - replace tabs with spaces

#include <stdio.h>
#define MAXLINE 1000
#define TAB 8
int detab(char line[], int maxline);


int main() {

    // int i;
    int len;
    char line[MAXLINE];

    while ((len = detab(line, MAXLINE)) > 0)
        printf("%s", line);
}


int detab(char line[], int maxline) {
    int c, i, y;

    for (i = 0; i < maxline && (c = getchar()) != EOF; ++i) {

        if (c == '\t') {
            // If character is a TAB, replace it with spaces
            // and offset it's position accordingly.
            for (y = 0; y < TAB; ++y)
                line[i + y] = ' ';
            i += y - 1; // Offset i to new position
            // NOTE: Not sure why -1 is necessary?

        }
        else {
            line[i] = c;
        }
    }

    line[i] = '\0';
    return i;
}