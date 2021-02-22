#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: Return c or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
