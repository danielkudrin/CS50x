#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string names[4];
    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "DAVID";
    names[3] = "ROBERT";

    printf("%s\n", names[0]);
    printf("%c%c%c%c", names[0][1], names[0][2], names[0][3], names[1][0]);
}