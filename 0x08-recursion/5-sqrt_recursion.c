#include "main.h"
#include <stdio.h>

/**
 * _sqr_root - second function
 * sqr_toot - added function
 * @n: first argument
 * @i: added argument
 * Return: always zero
 */

int srt_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i < n)
	{
		return (srt_root(n, i + 1));
	}
	else
	{
		return (i);
	}
}
/**
* _sqrt_recursion - function first
*@n: argument
*Return: zero always
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (srt_root(n, 0));
	}
}
