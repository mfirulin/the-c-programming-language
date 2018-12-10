/* Exercise 1-3. Modify the temperature conversion program to print a heading above the table. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    printf("FAHR CELSIUS\n");
    
    // fahrenheit to celsius
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
        fahr += step;
    }

    return EXIT_SUCCESS;
}
