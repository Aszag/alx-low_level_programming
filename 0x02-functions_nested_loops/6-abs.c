#include "main.h"
#include <stdio.h>
/**
 * _abs -computes the absolute value of an integer
 * Return: absolute value
 * @i: input number as an integer
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
