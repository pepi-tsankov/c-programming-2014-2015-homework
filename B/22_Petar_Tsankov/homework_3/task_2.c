#include<stdio.h>
int main(){
unsigned long i,n1,n2,h;
n1=2;
printf("%i",n1);
for(i=1,n2=1;i<100;i++){
printf(", %lu",n2);
h=n1+n2;
n1=n2;
n2=h;
}
printf("\n");
return 0;
}
