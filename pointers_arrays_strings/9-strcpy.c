#include "main.h"
#include <string.h>

/**
 * _strcpy - main
 *
 * @dest : the pointer who recive the value of src
 *
 * @src : the pointer that send the value to dest
 *
 * Return: return the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
