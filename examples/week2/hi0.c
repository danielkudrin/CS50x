#include <stdio.h>
#include <cs50.h>

int main(void)
{
	char c1 = 'H';
	char c2 = 'I';
	char c3 = '!';
	printf("%i %i %i\n", (int *) c1, (int *) c2, (int *) c3);
}
