#include <stdio.h>
int main()
{
long long num,a,reverse,add;
int mod,i,j;
scanf("%lld",&num);
a=num;
i=0;
while(a>0)
	{
	a=a/10;
	i++;
	}
a=num;
reverse=0;
while(a>0)
	{
	mod=a%10;
	a=a/10;
	add=mod;
	for(j=1;j<i;j++)
		{
		add=add*10;
		}
	reverse=reverse+add;
	i=i-1;
	}
printf("%lld\n",reverse);
return 0;
}
