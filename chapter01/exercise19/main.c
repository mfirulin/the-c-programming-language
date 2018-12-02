#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getline(char line[], int lim);
void copy(char to[], char from[]);
void reverse(char line[]);

int main()
{
    char line[MAXLINE], reversed[MAXLINE];

    while (getline(line, MAXLINE) > 0) {
        copy(reversed, line);
        reverse(reversed);
        printf("%s", line);
        printf("%s", reversed);    
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

void reverse(char line[])
{
    int len, i = 0, j = 0;
    char c;
    
    while (line[i])
        ++i;
        
    if (i > 0) {
        --i;

        len = i / 2;
        while (j <= len) {
            c = line[j];
            line[j] = line[i];
            line[i] = c;
            ++j;
            --i;
        }
    }
}
