#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage ./caesar key\n");
        return 1;
    }

    for(int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if(isdigit(argv[1][i]) == 0)
        {
            printf("Usage ./caesar key(its a number)\n");
            return 2;
        }
    }

    string s = get_string("Plaintext: ");    
    int key = atoi(argv[1]);

    for(int i = 0, n = strlen(s); i < n; i++)
    //iterate through (s), cipher characters
    {
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))
            {
                char c = ((s[i] - 'A' + key) % 26 + 'A');
                printf("%c", c);
            }
            else
            {
                char c = ((s[i] - 'a' + key) % 26 + 'a');
                printf("%c", c);
            }
        }
        else
        {
            //print punctuation
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}