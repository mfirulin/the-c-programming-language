#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = upper;
    
    printf("FAHR CELSIUS\n");
    
    for (fahr = upper; fahr >= lower; fahr -= step) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
    }

    return EXIT_SUCCESS;
}
