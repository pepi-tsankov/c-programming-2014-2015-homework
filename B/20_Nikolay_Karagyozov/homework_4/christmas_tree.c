#include <stdio.h>

int main(){

	int space; // air pockets
	int star = 1; //contents of tree
	int i,j; //counters
	int height = 23; //height of tree

	space = height-1;

	for(j=1; j<=height;j++){

		for(i=space; i>0; i--){
			printf(" ");
		};

		for(i=1;i<=star;i++){
			printf("*");
		};

		printf("\n");
		
		space-=1;
		star+=2;
	};

	return 0;
}