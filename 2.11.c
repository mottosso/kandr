// Conditional Expressions

#include <stdio.h>
#include <assert.h>


int main() {
    int a = 1, b = 2, x, y;
    if (a > b)
        x = a;
    else
        x = b;

    // Can alternatively be written as
    y = a > b ? a : b;
    assert(x == y);
}