#include<stdio.h>
#include<conio.h>

int main () {
	
	int n;
	int mtp=1;
	printf("This programme will take a number from you and print the product of the even numbers from 1 till your number\n");
	
	printf("Enter your number ");
	scanf("%d" , &n);
	if ( n%2 != 0) {
	n=n-1;
	}
	while (n>0) {
		mtp=mtp*n;
		n=n-2;
	}
	printf("Your answer is %d",mtp);
	
	getch ();
	return 0;
}
