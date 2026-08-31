#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		 s[start] = s[end];
		 s[end] = tmp;

		 start++;
		 end--;
	}
}
