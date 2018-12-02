#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar('\\');
            putchar('s');
        }
        else if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\n') {
            putchar('\\');
            putchar('n');
        }
        else
            putchar(c);
    }

    return EXIT_SUCCESS;
}
