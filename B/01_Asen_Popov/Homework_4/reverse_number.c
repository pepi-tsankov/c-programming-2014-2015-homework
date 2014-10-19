#include <stdio.h>

int main() {
	int n=987697, obr=0;
	int n1=n;
	while (n!=0) {
		obr=obr*10;
		obr=obr+n%10;
		n=n/10;
	}
	printf("%d => %d\n", n1, obr);
	return 0;
}
