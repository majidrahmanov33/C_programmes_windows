#include<stdio.h>
#include<conio.h>

int main () {
	
	int sum=0;
	int count=0;
	int n;
	int c;
	printf("This programme will take a number from you and tell you if it's zero or not, count the digits of number, and calculate the sum of the digits, and print them\n");
	printf("Enter your number ");
	scanf("%d",&n);
	if ( n = 0 ) {
		printf("This number is zero!");	
	}
	else {
	while (n>0) {
		n=n/10;
		sum=sum+(n % 10);
		c=c-1;
	}
	}
	
	getch();
	return 0;
}


