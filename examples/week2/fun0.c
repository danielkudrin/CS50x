#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);

int main(void)
{
	int n = get_int("Number of scores: ");
	int scores[n];
	for (int i = 0; i < n; i++)
	{
		scores[i] = get_int("Score %i: ", i + 1);
	}
	printf("Average %.3f", average(n, scores));
}


float average(int length, int array[])
{
	int sum = 0;
	for (int j = 0; j < length; j++)
	{
		sum += array[j];
	}
	return (float)sum / (float)length;
}
