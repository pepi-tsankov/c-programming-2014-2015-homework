#include <stdio.h>

int main(){

int a=5170984;
int reverse=0;
while(a!=0){
	reverse=reverse*10;
	reverse=reverse+a%10;
	a=a/10;
	}
printf("%d \n",reverse);


a=406567;
reverse=0;
while(a!=0){
	reverse=reverse*10;
	reverse=reverse+a%10;
	a=a/10;
	}
printf("%d \n",reverse);


a=368750;
reverse=0;
while(a!=0){
	reverse=reverse*10;
	reverse=reverse+a%10;
	a=a/10;
	}
printf("%d \n",reverse);


a=2369510;
reverse=0;
while(a!=0){
	reverse=reverse*10;
	reverse=reverse+a%10;
	a=a/10;
	}
printf("%d \n",reverse);


a=2183293;
reverse=0;
while(a!=0){
	reverse=reverse*10;
	reverse=reverse+a%10;
	a=a/10;
	}
printf("%d \n",reverse);


return 0;

}
