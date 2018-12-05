#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getline(char line[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    char line[MAXLINE], longline[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 80) {
            copy(longline, line);
            printf("%s", longline);  
        }
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

void copy(char to[], char from[])
{
    int i = 0;
    
    while ((to[i] = from[i]) != '\0')
        ++i;
}
