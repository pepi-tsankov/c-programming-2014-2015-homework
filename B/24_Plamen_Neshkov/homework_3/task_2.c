#include <stdio.h>

int lucas(int n) {
	if (n==0)
		return 2;
	if (n==1)
		return 1;
	
	int x=2,y=1,z=0;
	
	int i;
	for (i=2; i<=n; i++) {
		z=x+y;
		x=y;
		y=z;
	}

	return z;
}

int main() {
	int i;
	for (i=0; i<100; i++) {
		printf("%d, ",lucas(i));
	}
	return 0;
}