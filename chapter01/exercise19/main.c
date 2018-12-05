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
    
    while (line[i])
        ++i;
        
    if (i > 0) {
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
