#include "main.h"

/**
* print_number_base - function that prints a number in a given base
* @ap: the action pointer
* @base: the base to print the number in
* @uppercase: flag to determine if the letters should be in uppercase
*
* Return: the count
*/
int print_number_base(va_list ap, int base, int uppercase)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, base);

	if (!n)
		count += _putchar('0');
	
	for (i = 0; s[i]; i++)
	{
		if (uppercase && s[i] >= 'a' && s[i] <= 'f')
			count += _putchar(s[i] - 32); /* convert to uppercase*/
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
* _print_binary - function that prints a binary number from int
* @ap: the action pointer
*
* Return: the binary number
*/
int _print_binary(va_list ap)
{
	return print_number_base(ap, 2, 0);
}
/**
* print_hex_u - function that prints a hex number from int (uppercase)
* @ap: the action pointer
*
* Return: to count
*/
int _print_hex_u(va_list ap)
{
	return print_number_base(ap, 16, 1);
}

/**
* print_hex_l - function that prints a hex number from int (lowercase)
* @ap: the action pointer
*
* Return: count
*/
int _print_hex_l(va_list ap)
{
	return print_number_base(ap, 16, 0);
}


