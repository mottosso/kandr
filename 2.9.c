#include <stdio.h>
#include <assert.h>

/* squeeze: delete all c from s 

Note from Marcus: This is an interesting approach. It *overwrites*
characters within itself in cases where the character doesn't match
`c`. Finally, it overwrites the character at the end of the new length
with a "end of line", \0 which causes printf (and others?) to keep
outputting text only up until the point at which characters have been
overwritten.

Simply put, it doesn't output a shorter array, but inserts *an additional*
end of line to make it appear shorter when printing it.

Clever.

*/
void squeeze(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
    }

    s[j] = '\0';
}

int main() {
    char a[] = "hello world";
    char b = 'l';
    
    printf("Before: %s\n", a);
    
    unsigned long int size_before = sizeof(a);
    squeeze(a, b);
    unsigned long int size_after = sizeof(a);
    
    printf("After: %s\n", a);
    
    // Even though the squeeze makes the string appear shorter,
    // it actually isn't.
    assert(size_before == size_after);
}