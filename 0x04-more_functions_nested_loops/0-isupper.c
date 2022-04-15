#include "main.h"

/**
 *
 *_isupper - determines if the input is uppercase or not
 *
 *
 *Return - returns 0 or 1 depending on the input
 *
 */
int _isupper(int c)
{
	for(int i = 65; i < 90; i++)
	{
		if(i == c) return (1);
	}

	return (0);
}
