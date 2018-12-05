#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, s, t, nl;
    
    s = t = nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++s;
        else if (c == '\t')
            ++t;
        else if (c == '\n')
            ++nl;
    }
    
    printf("spaces:%d tabs:%d new lines:%d\n", s, t, nl);

    return EXIT_SUCCESS;
}
