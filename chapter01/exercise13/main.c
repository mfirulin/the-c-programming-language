/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>
#include <stdlib.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */
#define NWORDS 5

int main(void)
{
    int words[NWORDS] = {0};
    int word = 0;
    int state = OUT;
    int c;   
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                ++word;
                state = OUT;
                
                if (word == NWORDS)
                    break;
            }
        } else {
            ++words[word];
            state = IN;
        }
    }
    
    // Draw horizontal bars
    for (int i = 0; i < word; ++i) {
        for (int j = 0; j < words[i]; ++j)
            putchar('=');
        
        putchar('\n');
    }
    
    // Draw vertical bars
    int max = 0;
    for (int i = 0; i < word; ++i)
        if (words[i] > max)
            max = words[i];
    
    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < word; ++j)
            if (words[j] >= max - i)
                putchar('|');
            else
                putchar(' ');

        putchar('\n');
    }
    
    return EXIT_SUCCESS;
}
