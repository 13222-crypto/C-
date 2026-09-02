#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root, or -1 if it does not have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function to find the square root
 * @n: number to find the square root of
 * @i: current number being tested
 *
 * Return: square root or -1
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (find_sqrt(n, i + 1));
}
