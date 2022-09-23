#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare counter to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int counter = 0, dest_len = 0;

	while (dest[counter++])
		dest_len++;

	for (counter = 0; src[counter] && counter < n; counter++)
		dest[dest_len++] = src[counter];

	return (dest);

}
