/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -20;
    upper = 160;
    step = 20;
    
    celsius = lower;
    
    printf("CELSIUS  FAHR\n");

    // celsius to fahrenheit 
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius  + 32.0;
        printf("%7.0f %5.1f\n", celsius, fahr);
        celsius += step;
    }

    return EXIT_SUCCESS;
}
