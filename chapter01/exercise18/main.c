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
    
    while (line[i]) // find end of the line
        ++i;
        
    if (i > 0) { // we are on '\0' now, so if not empty line, step back
        --i;
        
        j = i;
        while (i >= 0 && line[i] == '\n') // trim all '\n' if several
            --i;
        
        if (j != i) // there was at least one '\n' so remember this
            nl = 1;
        
        while (i >= 0 && (line[i] == ' ' || line[i] == '\t')) // trim all spaces and tabs
            --i;
        
        i++;
        
        if (nl) // if there was '\n' return one back
            line[i++] = '\n';
        
        line[i] = '\0';
    }
}
