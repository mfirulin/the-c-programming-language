/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    long s, t, nl;
    
    s = t = nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++s;
        else if (c == '\t')
            ++t;
        else if (c == '\n')
            ++nl;
    }
    
    printf("spaces:%ld tabs:%ld new lines:%ld\n", s, t, nl);

    return EXIT_SUCCESS;
}
