#include "main.h"

/**
 * print_spaces - prints a given number of spaces
 * @n: the number of spaces to print
 *
 * Return: void
 */
void print_spaces(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar(' ');
    }
}

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n >= 100)
    {
        _putchar(n / 100 + '0');
        _putchar((n / 10) % 10 + '0');
        _putchar(n % 10 + '0');
    }
    else if (n >= 10)
    {
        _putchar(' ');
        _putchar(n / 10 + '0');
        _putchar(n % 10 + '0');
    }
    else
    {
        print_spaces(2);
        _putchar(n + '0');
    }
}

/**
 * print_times_table - prints the n times table
 * @n: the times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
    int i;
    int j;
    int product;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                product = i * j;
                if (j != 0)
                {
                    _putchar(',');
                    _putchar(' ');
                }
                print_number(product);
            }
            _putchar('\n');
        }
    }
}
