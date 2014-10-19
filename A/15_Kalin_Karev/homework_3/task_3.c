#include <stdio.h>
int main1(int num)
{
	int i = 1;
	while (i<=num)
	{
		if (num%i==0)
		{
			if (!((i==1) || (i==num)))
			{
				return 0;
			}
		}
		i++;
	}
		return 1;
}
int main()
{
	int c1 = 3;
	int c2 = 5;
	int i;
	int n1full = 0;
	int n2full = 0;
	int stopped = 5;
	int tdoub = 1;
	printf("(%d, %d)\n", c1, c2);
	for (tdoub=1; tdoub<=9; tdoub++)
	{
		i = stopped;
		while (i<=99999)
		{
			if ((main1(i)==1)&& (n1full==0))
			{
				c1 = i;
				n1full = 1;
			}
			else if ((main1(i)==1)&& (n1full==1))
			{
				c2 = i;
				n2full = 1;
			}
			if ((n1full==1) && (n2full==1))
			{
				printf("(%d, %d)\n", c1,c2);
				n1full = 0;
				n2full = 0;
				stopped = c2+1;
				break;
			}
			i++;
		}
	}
	return 0;
}

