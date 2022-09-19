#include <stdio.h>
#include "main.h"
/**
*rev_string -Re[D[D[D[C [CReverses a string
*s is the string to be reversed
*
* return end the program
*/
void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

/**
*rev_string - Reverses a string
*s is the string to be reversed
*
* return end the program
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

