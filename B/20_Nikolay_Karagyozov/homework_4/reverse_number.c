#include <stdio.h>

int main(){

	int number = 5000; // write number here
	int temp;
	int newNumber = 0;
	int i;

	while(number != 0){

		temp = number%10;

		switch(temp){
			case 0:
				if(newNumber!=0)
					newNumber*=10;
				break;
			case 1:
				newNumber*=10;
				newNumber+=1;
				break;
			case 2:
				newNumber*=10;
				newNumber+=2;
				break;
			case 3:
				newNumber*=10;
				newNumber+=3;
				break;
			case 4:
				newNumber*=10;
				newNumber+=4;
				break;
			case 5:
				newNumber*=10;
				newNumber+=5;
				break;
			case 6:
				newNumber*=10;
				newNumber+=6;
				break;
			case 7:
				newNumber*=10;
				newNumber+=7;
				break;
			case 8:
				newNumber*=10;
				newNumber+=8;
				break;
			case 9:
				newNumber*=10;
				newNumber+=9;
				break;

		};

		number /= 10;
	};

	printf("%d\n", newNumber);

	return 0;
}