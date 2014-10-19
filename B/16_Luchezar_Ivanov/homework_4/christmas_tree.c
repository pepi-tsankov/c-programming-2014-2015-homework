#include <stdio.h>
int main()
{
int height,i,j,stars,k,space;
scanf("%d",&height);
stars=1;
space=height;
for(i=1;i<=height;i++)
	{
	for(k=space-1;k>0;k=k-1)
		{
		printf(" ");
		}
	for(j=1;j<=stars;j++)
		{
		printf("*");
		}
	stars=stars+2;
	space=space-1;
	printf("\n");
	}
return 0;
}
