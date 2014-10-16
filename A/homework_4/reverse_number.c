#include <stdio.h>

int main ()
{
	int numb = 2183293;
	int reverse=0;
	
	while(numb>0)
	{
		int remainder = numb % 10;
		numb /= 10;
		reverse += remainder;
		reverse *= 10;
	}
	reverse /= 10;
	
	printf("%d\n",reverse);
	return 0;
}
