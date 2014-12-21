/* Excersize 2-1.

Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation.

*/

#include <stdio.h>


int main() {
    printf("Size of signed char: %zu byte\n", sizeof(char));
    printf("Size of signed short: %zu byte\n", sizeof(short));
    printf("Size of signed int: %zu byte\n", sizeof(int));
    printf("Size of signed long: %zu byte\n", sizeof(long));
    
    printf("Size of unsigned char: %zu byte\n", sizeof(unsigned char));
    printf("Size of unsigned int: %zu byte\n", sizeof(unsigned int));
    printf("Size of unsigned int: %zu byte\n", sizeof(unsigned int));
    printf("Size of unsigned long: %zu byte\n", sizeof(unsigned long));
}