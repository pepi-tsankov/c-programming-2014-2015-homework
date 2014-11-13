#include<stdio.h>
int tree(int nstars)
{
	int i, spaces, star;
	
	int nrows = nstars;
	for(i=1;i<=nrows;i++)
	{
		for(spaces=1;spaces<=nstars;spaces++)
		{
			printf(" ");
		}
		for(star = 1;star <= i; star++)
		{
			printf("*");
			printf(" ");
		}
		
		printf("\n");
		nstars = nstars - 1;
	}
	return 0;
}

int main()
{
	tree(4);
	tree(7);
	tree(11);
	return 0;
}
