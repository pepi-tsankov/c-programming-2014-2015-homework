#include<stdio.h>



int main(){
	int n,i,l,a,x,c;
	scanf("%d",&n);
	scanf("%d",&l);
	int k[l];
	for(i=1;i<=l;i++){
	scanf("%d",&k[i]);
	};
	for (i=0;i<=n;i++){
		x=0;	
		for(c=1;c<=l;c++){
			if (k[c]==i){
				x=x+1;
			};
		};
		printf("%d :",i);
		for(a=1;a<=x;a++){
		printf("*");
		
		};
	printf("\n");
	}
	return 0;
	
}
