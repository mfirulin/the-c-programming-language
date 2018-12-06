#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000
#define IN 1
#define OUT 0

int getline(char line[], int lim);
void comdel(char to[], const char from[]);

int main(void)
{
    int len;
    char line[MAXLINE], line2[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        comdel(line2, line);
        printf("%s", line2);  
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

void comdel(char to[], const char from[])
{
    static int f = OUT;
    int i = 0, j = 0; 
    
    while (from[i] != '\0') {
            
        if (f == OUT && from[i] == '/' && from[i + 1] == '*') {
            f = IN;
            i += 2;
        }
        else if (f == IN && from[i] == '*' && from[i + 1] == '/') {
            f = OUT;
            i += 2;
        }
    
        if (f == OUT && from[i] != '\0')
            to[j++] = from[i];
        
        if (from[i] != '\0')
            ++i;
    }
    
    to[j] = '\0';
}
