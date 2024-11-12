#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatene deux strings
 * @s1 : premiere string
 * @s2 : deuxieme string
 * @n : n premiere bytes de s2 concatene
 * Return: pointeur vers s1 + s2(n)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int s3_len = 0;
	unsigned int s2_cpy = 0;
	unsigned int s3_cpy;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0' || s2_len < n)
		s2_len++;
	if (s2_len <= n)
		s3_len = s1_len + s2_len;
	else
		s3_len = s1_len + n;

	s3 = malloc((s3_len + 1) * 1);

	if (s3 == NULL)
		return (NULL);
	for (s3_cpy = 0; s3_cpy < s1_len; s3_cpy++)
		s3[s3_cpy] = s1[s3_cpy];
	for (; s3_cpy < s3_len; s3_cpy++)
	{
		s3[s3_cpy] = s2[s2_cpy];
		s2_cpy++;
	}
	s3[s3_len] = '\0';
	return (s3);
}
