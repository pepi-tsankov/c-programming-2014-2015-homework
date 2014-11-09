#include <stdio.h>

void rot13(char arr[1000]){
	int i;
	for(i = 0; arr[i] != '\0'; i++){
		char ch=arr[i];
		int number, n;
		if(ch >= 'A' && ch <= 'Z'){
			number = ch - 'A';
			n = 13;
			number = (number + n) % 26;
			arr[i] = 'A' + number;
		}
		else if(ch >= 'a' && ch <= 'z'){
			number = ch - 'a';
			n = 13;
			number = (number + n) % 26;
			arr[i] = 'a' + number;
		}
				
	}
	printf("%s\n",arr);
}

void encryption(char char1[1000]){
	while(scanf("%1000s", char1)) {
		rot13(char1);
	}
}

int main(){
	char b, chr[1000];
	int number;
	printf("Enter option: ");
	scanf("%c",&b);
	if(b == 'c' || b == 'd'){
			encryption(chr);
	}
	else if(b == 'q'){ 
		printf("You exit the program.\n");
		return 0; 	
	}
	return 0;
}
