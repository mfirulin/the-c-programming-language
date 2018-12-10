/* Exercise 1-12. Write a program that prints its input one word per line. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, n = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (++n <= 1)
                putchar('\n');
        }
        else {
            n = 0;
            putchar(c);
        }
    }

    return EXIT_SUCCESS;
}
