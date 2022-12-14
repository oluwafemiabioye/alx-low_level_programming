#include "main.h"

/**
 * _isalpha - Checks for alphas
 * @c: Charcter to be chechked
 *
 * Return: 1 if chracter is a lower, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
