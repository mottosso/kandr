#include <stdio.h>

/* print Fahrenheit-Celsius teable
    for fahr = 0, 20, ..., 300 */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}