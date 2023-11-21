#include "main.h"

/**
* write_char - writes the character c to stdout
* @c: the character to print
*
* Return: the number of characters printed (always 1).
*/
int write_char(char c)
{
	return (write(1, &c, 1));
}

/**
* print_char - prints a character to stdout
* @ap: the arguments pointer
*
* Return: the number of characters printed (always 1).
*/
int print_char(va_list ap)
{
	write_char(va_arg(ap, int));
	return (1);
}

/**
* print_string - prints a string to stdout
* @ap: the argument pointer
*
* Return: the number of characters printed
*/
int print_string(va_list ap)
{
	int count = 0;
	char *s = va_arg(ap, char *);

	if (!s)
		s = "(null)";

	for (; *s; s++)
		count += write_char(*s);

	return (count);
}

/**
* print_percent - prints a percent symbol to stdout
* @ap: the arguments pointer (unused)
*
* Return: the number of characters printed (always 1).
*/
int print_percent(va_list ap __attribute__((unused)))
{
	write_char('%');
	return (1);
}

/**
* print_int - prints a integer to stdout
* @ap: the argument pointer
*
* Return: the number of characters printed
*/
int print_int(va_list ap)
{
	int count = 0;
	int n = va_arg(ap, int);

	if (n < 0)
		count += write_char('-');

	return (count);
}

/**
* print_positive_int - helper function to print a positive integer
* @n: the positive integer to print
*
* Return: the number of characters printed
*/
int print_positive_int(int n)
{
	int count = 0;
	int i;
	int digit;

	if (n == 0)
		count += write_char('0');

	for (i = 1000000000; i > 0; i/= 10)
	{
		digit = (n / i) % 10;
		if (digit < 0)
			digit = -digit;
		count += write_char(digit + '0');
	}

	return (count);
}
