// Entab - Replace spaces with tabs and spaces

#include <stdio.h>
#define MAXLINE 1000
#define TAB 4
int entab(char line[], int maxline);


int main() {
    int len;
    char line[MAXLINE];

    while ((len = entab(line, MAXLINE)) > 0)
        printf("%s", line);
}


int entab(char line[], int maxline) {
    int c, i, y;
    int spaces;  // Number of spaces
    int tabs;

    for (i = 0; i < maxline && (c = getchar()) != EOF; ++i) {
        if (c == ' ') {
            spaces = 1;
            while ((c = getchar()) == ' ') {
                ++spaces;
            }

            // How many tabs and spaces should we insert?
            tabs = spaces / TAB;  // Integer division will round off appropriately
            spaces = spaces % TAB;  // The remainder is spaces
            // printf("%i tabs and %i spaces\n", tabs, spaces);

            for (y = 0; y < tabs; ++y) {
                line[i] = '\t';
                ++i;
            }
            for (y = 0; y < spaces; ++y) {
                line[i] = ' ';
                ++i;
            }

        } else {
            line[i] = c;
        }
    }

    line[i] = '\0';
    return i;
}