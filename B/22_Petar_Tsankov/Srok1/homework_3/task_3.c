#include<stdio.h>
int main(){
int primes[10],primes2[10],prtw,i,i1,pr,allprimes[1000],ispr;
prtw=0;
pr=0;
i=2;
i1=0;
while(prtw!=10){
	ispr=0;
	for(i1=1;i1<=pr;i1++){ 
		if(!(i%allprimes[i1])){
			ispr++;  
		}   
	}
	if(!(ispr)){
		ispr=0;
		pr++;
		allprimes[pr]=i;
		//printf("1 %i %i\n",primes[pr],pr);
		for(i1=1;i1<=pr;i1++){ 
			//printf("2 %i %i %i \n",i1,allprimes[i1],(i+2));  
			if(!((i+2)%allprimes[i1])){
				//printf("3\n");
				ispr++;
			}
		}
	if(!(ispr)){
		prtw++;  
		primes[prtw]=i;
		primes2[prtw]=i+2;
		i++;
		printf("(%i, %i)\n",primes[prtw],primes2[prtw]);
		
		}
	}    
	i++;
}
return 0;
}
