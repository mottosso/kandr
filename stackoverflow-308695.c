// About the dangers of copying strings

#include <stdio.h>
#include <string.h>

void squeeze2(char s1[]) {
    printf("Size: %lu\n", strlen(s1));
}

int main() {
    char str[80]; // This must be large enough to fit all concatenations.
    strcpy(str, "These ");
    strcat(str, "strings ");
    strcat(str, "are ");
    strcat(str, "concatenated.");

    printf("Size: %lu\n", sizeof('Hell'));
    
    char hello[] = "123";
    
    squeeze2(hello);

    // printf("%s\n", str);
}