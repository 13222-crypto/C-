#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: main string to search in
 * @needle: substring to search for
 *
 * Return: pointer to beginning of located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	if (*needle == '\0')
		return (haystack);

	return (NULL);
}
