/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and
to delete entirely blank lines. */

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getline(char line[], int lim);
void rtrim(char line[]);

int main(void)
{
    char line[MAXLINE];

    while (getline(line, MAXLINE) > 0) {
        rtrim(line);
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

void rtrim(char line[])
{
    int i = 0, j, nl = 0;
    
    while (line[i])
        ++i;
        
    if (i > 0) {
        --i;
        
        j = i;
        while (i >= 0 && line[i] == '\n')
            --i;
        
        if (j != i)
            nl = 1;
        
        while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
            --i;
        
        i++;
        
        if (nl)
            line[i++] = '\n';
        
        line[i] = '\0';
    }
}
