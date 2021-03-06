/* Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time. */

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getline(char line[], int lim);
void reverse(char line[]);

int main(void)
{
    char line[MAXLINE], reversed[MAXLINE];

    while (getline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
        
    return EXIT_SUCCESS;
}

int getline(char line[], int lim)
{
    int c, i;
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
        
    if (c == '\n')
        line[i++] = c;
    
    line[i] = '\0';
    
    return i;
}

void reverse(char line[])
{
    int len, i = 0, j = 0;
    
    while (line[i]) // find end of the line
        ++i;
        
    if (i > 0) { // we are at '\n' now, so if not empty line step back
        --i;

        len = i / 2;
        while (j <= len) {
            char c = line[j];
            line[j] = line[i];
            line[i] = c;
            ++j;
            --i;
        }
    }
}
