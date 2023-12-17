#include<stdio.h>
#include<conio.h>

int main() {
	
	int num,flag=0,i;
	
	printf("Enter your number: ");
	scanf("%d",&num);
	
	for ( i=2 ; i <= num/2 ; i++ )
	{
		if ( num % i == 0 ) {
			flag=1;
			break;
		}
		
	}
	
	if ( flag == 0 ) {
		printf("It's Prime");
		
	}
	
	else {
		printf("It's murekkeb");
	}
	
	getch();
	return 0;
}
