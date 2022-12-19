#include"main.h"

/**
 * print_array - prints n elements of arrays.
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; ++d)
	{
		if (d != (n - 1))
			printf("%d, ", a[d]);
		else
			printf("%d", a[d]);
	}
	printf("\n");
}
