#include <stdio.h> 
int main(){
int l, i, j, range=20, length=12;
int origarray[12]={9, 8, 7, 7, 8, 2, 3, 4, 1, 0, 1, 2};
long checkerarray[20+1]={0};
for(l=0; l<length; l++){
	for (j=1; j<=range+1 ; j++){
		if(origarray[l]==j){
			checkerarray[j]++;
		}
	}	
}
for(j=0; j<=range; j++){
	printf("%d: ",j);
	while(checkerarray[j]>0){
		checkerarray[j]=checkerarray[j]-1;
		printf("*");
	}
	printf("\n");
}

return 0;
}
