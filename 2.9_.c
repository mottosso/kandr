// Bitwise Operators

#include <stdio.h>
#include <string.h>
#include <assert.h>


int main() {
    char c = 'H';
    c = c & 0177;
    assert(c == 'H');

    int i = 10;

    // Shifting integers seems identical to
    // multiplying by 2 per shift.
    i = i << 1;
    assert(i == 20);

    i = i << 1;
    assert(i == 40);

    // Shifting backwards results in what I'd expect.
    i = i >> 1;
    assert(i == 20);

    // Shifting a char results in another char
    // but figuring out which char it ends up
    // with is still a mystery to me. Possible
    // that it shifts along the ASCII-table?
    char g = 'a';
    g = g << 6;
    assert(g == '@');
}