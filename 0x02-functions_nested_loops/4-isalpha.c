#include "main.h"
/**
 * int _isalpha- this is the start of the programme
 *
 * The programme takes c ancii value and cheak if it falls in range of A -Z /a - z
 *
 * Return: Always sucess
 */
int _isalpha(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
