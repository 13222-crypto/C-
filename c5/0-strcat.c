#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* 1. الوصول لنهاية النص الأول dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* 2. إضافة نص src في نهاية dest */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* 3. إغلاق النص بـ Null byte */
	dest[dest_len] = '\0';

	return (dest);
}
