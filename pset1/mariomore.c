#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
        height = get_int("Enter pyramid height from 1 to 8 inclusive: \n");
    } while ((1 > height) || (8 < height));
    for(int i = 0; i < height; i++) {                   /* lines */
        for(int j = 0; j < height - i; j++) {     /* spaces */
            printf(" ");
        }
        for(int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("  ");
        for(int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
