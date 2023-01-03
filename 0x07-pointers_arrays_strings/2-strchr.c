#include "main.h"

/**
 * _strch - locates a character in a string
 * @s: string
 * @c: character to search
 * Retrn: Pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring While*/
	{
		if (*s == c) /*if s ==c*/
		{
			return (s); /*retrn */
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0); /* values null*/
}
