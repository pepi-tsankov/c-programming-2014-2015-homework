#include <stdio.h>

int main ()
{
	int height = 90;
	int i,j;
	int spaces;
	for (i = 0; i < height; i += 1)
	{
		spaces = (height - 1) - i;
		for (j = 0; j < spaces; j += 1)
		{
			printf(" ");
		}
		for (j = 0; j < i*2 + 1; j += 1)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
