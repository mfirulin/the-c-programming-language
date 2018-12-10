/* Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to
handle quoted strings and character constants properly. C comments don't nest. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXLINE 1000

int getline(char line[], int lim);
void delete_comments(char to[], const char from[]);

int main(void)
{
    int len;
    char line[MAXLINE], line2[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        delete_comments(line2, line);
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

void delete_comments(char to[], const char from[])
{
    static int in_comment = false;
    static int in_string = false;
    int i = 0, j = 0; 
    
    while (from[i] != '\0') {
        
        if (from[i] == '\"')
            in_string = !in_string;
            
        if (!in_string && !in_comment && from[i] == '/' && from[i + 1] == '*') {
            in_comment = true;
            i += 2;
        }
        else if (!in_string && in_comment && from[i] == '*' && from[i + 1] == '/') {
            in_comment = false;
            i += 2;
        }
    
        if (!in_comment && from[i] != '\0')
            to[j++] = from[i];
        
        if (from[i] != '\0')
            ++i;
    }
    
    to[j] = '\0';
}
