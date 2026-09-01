#include "main.h"

int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}

	return (str);
}
