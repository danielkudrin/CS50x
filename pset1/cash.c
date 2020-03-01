#include <math.h>
#include <stdio.h>
#include <cs50.h>

float GetPositiveFloat();

int main(void)
{
    float n = GetPositiveFloat();
    int coins = 0;
    int cents = round(n * 100);

    while(cents > 0)
    {
        if(cents >= 25) {
                cents -= 25;
                coins += 1;
        }
        else if(cents >= 10) {
            cents -= 10;
            coins += 1;
        }
        else if(cents >= 5) {
            cents -= 5;
            coins += 1;
        }
        else if(cents < 5) {
            cents -= 1;
            coins += 1;
        }
    }
    printf("%i coins\n", coins);
    return 0;
}

float GetPositiveFloat()
{
    float k = 0;
    do {
    k = get_float("Type in a positive dollar amount.\n");
    } while (k <= 0);
    return k;
}
