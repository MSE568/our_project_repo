#include <stdio.h>
int main(void)
{
    while (1)
    {
        printf("enter a char: ");
        char x;
        scanf(" %c", &x);
        int y = (int)x;
        if('a' <= x && x <= 'z'||'A' <= x && x <= 'Z')
        {
            if ('A' <= x && x <= 'Z')
            {
                char z = (char)(y + 32);
                printf("%c\n", z);
            }
            else if ('a' <= x && x <= 'z')
            {
                char z = (char)(y - 32);
                printf("%c\n", z);
            }
            else
            {

            }
            break;
        }
        else
        {
            printf("it isn't a regular character\n");
            if (x >= '0' && x <= '9') {
                printf("it's a number\n");
            } else if
                    (
                    (x >= 32 && x <= 47)
                    ||
                    (x >= 58 && x <= 64)
                    ||
                    (x >= 91 && x <= 96)
                    ||
                    (x >= 123 && x <= 126)
                    )
            {
                printf("it's a symbol\n");
            }
            else if((x >= 192 && x <= 223) || (x >= 128 && x <= 147))
            {
                printf("it's a latin character\n");
            }
            else
            {

            }
            printf("try again\n");
        }
    }
    return 0;
}