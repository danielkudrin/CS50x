/* ---mario-1.c--- */

#include <stdio.h>

int main(void)
{
    int h; //pyramid height
    do 
    {
        printf("Input pyramid height from 1 to 8: ");
        scanf("%d", &h);
    } while((h <= 1) || (h >= 8)); 
    for (int j = 0; j < h; j++) //lines(height)
    {
        for(int i = 0; i < j+1; i++) //width
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

