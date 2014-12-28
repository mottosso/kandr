#include <stdio.h>
#include <assert.h>


/* any: Return first location in a string s1 where any
character from the string s2 occurs */
int any(char s1[], char s2[]) {
    int i, k;

    for (i = 0; s1[i] != '\0'; i++)
        for (k = 0; s2[k] != '\0'; k++)
            if (s2[k] == s1[i])
                // Early return if a match is found.
                return i;

    return -1;
}

int main() {
    char s1[] = "hello world";
    char s2[] = "o";

    int loc = any(s1, s2);
    printf("Location: %i", loc);
    assert(loc == 4); // 4th index is the end of "hello"
}