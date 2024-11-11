#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c = sizeof(int *);
	printf("%d", c);
}
