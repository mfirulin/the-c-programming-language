/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar('\\');
            putchar('s');
        } else if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else
            putchar(c);
    }

    return EXIT_SUCCESS;
}
