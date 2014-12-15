// External Variables and Scope
// 
// This approach is typically inferior to the prior example,
// characterArrays.c due to the  "global" nature of the variables,
// similar to module-level variables in Python which are declared
// multiple times through many files.

#include <stdio.h>

#define MAXLINE 1000

// Variables declared globally or "externally"
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline2(void);
void copy(void);

int main() {
    int len;

    max = 0;
    while ((len = getline2()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) // There was a line
        printf("%s", longest);
}

int getline2(void) {
    int c, i;

    for (i = 0; i < MAXLINE - 1
        && (c = getchar()) != EOF && c != '\n'; ++i)
            line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(void) {
    int i;

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}