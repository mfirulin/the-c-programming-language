#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float fahr, celsius;
    
    printf("FAHR CELSIUS\n");
    
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
    }

    return EXIT_SUCCESS;
}
