#include "underline.h"
/* All of the main functions for the strings analysis */

/**
 * genral use
 * _putchar - It put characters
 * @c: is the character to print
*/
void _putchar(char c)
{
    write(1, &c, 1);
}

/**
 * _strlen - returns the length of a string
 * @s: is analized string
 * Return: length of string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * @orig: is the original string
 * @cpy: is the copy of the original string
*/
char *_strcpy(char *cpy, char *orig)
{
    int  len;
    int i;

    len = _strlen(orig);

    for (i = 0; i <= len; i++)
        cpy[i] = orig[i];
        
    return (cpy);
}

/**
 * _reverse - reverses a string
 * @s: is the input string
 * @n: is the length of the input string
 * Return: reversed string
 */
char *_reverse(char *s, int n)
{
    int i;
    char *rev;

    rev = malloc(sizeof(char) * (n + 1)); /*Add 1 for the null terminator*/
    if (rev == NULL)
        return (NULL);

    for (i = 0; i < n; i++)
        rev[i] = s[n - i - 1];

    rev[n] = '\0'; /*Add null terminator at the end of the reversed string*/

    return (rev);
}
