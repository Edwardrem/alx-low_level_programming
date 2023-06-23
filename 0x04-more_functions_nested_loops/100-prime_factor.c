#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int maxPrime = -1;
	long int d = 2;

	while (n % d == 0)
	{
		maxPrime = d;
		n /= d;
	}

	d = 3;

	while (n != 1 && d <= sqrt(n))
	{
		while (n % d == 0)
		{
			maxPrime = d;
			n /= d;
		}
		d += 2;
	}

	if (n > 2)
		maxPrime = n;

	printf("%ld\n", maxPrime);

	return (0);
}
