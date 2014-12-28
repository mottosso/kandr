#include <stdio.h>
#include <string.h>
#include <assert.h>


/* squeeze: delete characters in s1 that matches any character s2 */
void squeeze(char s1[], char s2[]) {
    int i, j, k, match;

    for (i = j = 0; s1[i] != '\0'; i++) {
        match = 0;

        // Scan s2 for the current character, sl[i]
        for (k = 0; s2[k] != '\0'; k++) {
            if (s2[k] == s1[i]) {
                match = 1;
                break;
            }
        }

        if (match != 1) {
            s1[j] = s1[i];
            j++;
        }
    }

    s1[j] = '\0';
}

int main() {
    char s1[] = "hello world";
    char s2[] = "lo";

    squeeze(s1, s2);
    assert(strncmp(s1, "he wrd", 10) == 0);

}