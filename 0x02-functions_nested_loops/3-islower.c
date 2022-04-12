#include <stdio.h>
/**
 *int _islower(int c) checks for lowercase character.
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
