#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

int count_letters(string mystr);
int count_words();
int count_sentences();
int count_index();




int main(void)
{
    string s = get_string("Input: ");
   //int words = 0;
    //int sentences = 0;
    //int index = 0; 
    int letters = count_letters(s);
    printf("%i letters\n", letters);
}

int count_letters(string mystr)
{
    int k = 0;
    for(int i = 0, n = strlen(mystr); i < n ; i++)
    {
        if(isalpha(mystr[i]))
        {
            k++;
        }
    }
    return k;
}
/*
int count_words()
{

}

int count_sentences()
{

}

int count_index()
{

}
*/