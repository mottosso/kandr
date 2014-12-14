#include <stdio.h>
#define MAXLINE 1000  // Maximum input line length

int getline2(char line[], int maxline);  // Previous declaration of getline in stdio
void copy(char to[], char from[]);


// Print the longest input line
int main() {
    int len;                // Current line length
    int max;                // Maximum line length seen so far
    char line[MAXLINE];     // Current input value
    char longest[MAXLINE];  // Longest input value

    max = 0;
    while ((len = getline2(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)  // There was a line
        printf("%s", longest);
    return 0;
}


// getline2: Read a line into line, return length
int getline2(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}


// copy: Copy 'from' into 'to'; assume it is big enough
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}