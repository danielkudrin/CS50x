#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void counter(string mystr, int *ltrs, int *wrds, int *sntncs);

int main(void)
{
    string s = get_string("Input: ");
    int words = 0;
    int sentences = 0;
    int letters = 0;

    if(isalnum(s[0])) //check if we have any input, otherwise - 0 words.
    {
        words++;
    }

    counter(s, &letters, &words, &sentences);

    float grade = (0.0588 * ((float) letters / (float) words * 100) 
    - 0.296 * ((float) sentences / (float) words * 100) - 15.8);

    printf("%i letter(s), %i word(s), %i sentence(s).\n", letters, words, sentences);
    //printf("%.f\n", roundf(grade));
    if((roundf(grade)) <= 1)
    {
        /* if grade is less or equal 1*/
        printf("Before Grade 1\n");
    }
    else if((roundf(grade) > 1) && (roundf(grade) <= 16))
    {
        /* if grade is between 1 and 16*/
        printf("Grade %.f\n", roundf(grade));
    }
    else 
    {
        printf("Grade 16+\n");
    }
    return 0;
}

void counter(string mystr, int *ltrs, int *wrds, int *sntncs)
{
    for(int i = 0, n = strlen(mystr); i < n ; i++)
    {
        if(isalpha(mystr[i]))
        {
            *ltrs += 1;
        }
        if(isspace(mystr[i]))
        {
            *wrds += 1;
        }
        if(i > 0 && (mystr[i] == '!' || mystr[i] == '?' || mystr[i] == '.') && isalnum(mystr[i - 1]))
        {
            *sntncs += 1;
        }
    }
}

