#include "main.h"
/**
 * print_array - a fuction that prints n elements of arrays
 * @a: array name
 * @n: is the number of element of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int *n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (1 == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
