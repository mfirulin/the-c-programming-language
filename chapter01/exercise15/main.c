#include <stdio.h>
#include <stdlib.h>

void fahr_to_celsius(int lower, int upper, int step);

int main()
{
    fahr_to_celsius(0, 300, 20);

    return EXIT_SUCCESS;
}

void fahr_to_celsius(int lower, int upper, int step)
{
    float fahr = lower, celsius;
    
    printf("FAHR CELSIUS\n");
    
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
        fahr += step;
    }
}
