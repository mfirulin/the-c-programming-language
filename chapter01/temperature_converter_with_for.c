#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
        
    printf("\n");
    
    for (int cels = -20; cels <= 160; cels += 10)
        printf("%3d %6.1f\n", cels, (9.0 / 5.0) * cels + 32.0);

    return EXIT_SUCCESS;
}
