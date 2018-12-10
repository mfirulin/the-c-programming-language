/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, s = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++s;
        else
            s = 0;
            
        if (s <= 1)
            putchar(c);
    }

    return EXIT_SUCCESS;
}
