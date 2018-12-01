// fahrenheit to celsius
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    printf("FAHR CELSIUS\n");
    
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
        fahr += step;
    }

    return EXIT_SUCCESS;
}
