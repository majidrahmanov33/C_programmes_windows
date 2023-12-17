#include<stdio.h>

int main(void) {
	 
	char n;
	
	printf("Enter your fokin character: \n");
	scanf("%c",n);
	
	switch(n) {
		
		case 'E':
			printf("Your grade is Excellent!");
			break;
		
		case 'V':
			printf("Your grade is Very Good!");
			break;
			
		case 'G':
			printf("Your grade is Good.");
			break;
			
		case 'A':
			printf("Your grade is about the Average.");
			break;
			
		case 'F':
			printf("Your grade is too bad.You failed.");
			break;
			
	}
	
	return 0;
}
