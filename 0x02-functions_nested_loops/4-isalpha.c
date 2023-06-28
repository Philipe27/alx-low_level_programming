#include "main.h"
/**
 * _isalpha- This is the start of the programme
 * @c : it is a place holder
 * The programme takes c ancii ranges it with A -Z /a - z
 *
 * Return: Always sucess
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
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
