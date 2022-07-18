#include <stdio.h>
#include <ctype.h>

int main(void)
{
    for (;; )
    {
        int c;
        /* ... main body of program ... */
        fputs("Continue? [y/n] ", stdout);
        fflush(stdout);
        c = tolower(getchar());
        if (c == 'n')
        {
            break;
        }
        while (c != '\n' && c != EOF)
        {
            c = getchar();
        }
    }
    return 0;
}