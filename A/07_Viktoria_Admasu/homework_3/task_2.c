#include <stdio.h>
int main()
{
long long unsigned int L1 = 2;
long long unsigned int L2 = 1;
long long unsigned int L3;
int i;

printf ("%llu", L1);
printf (", %llu", L2);

for (i = 2; i <= 100; i += 1)
{
	L3 = L2 + L1;
	L1 = L2;
	L2 = L3;
	printf (", %llu", L3);
}

return 0;
}
	
