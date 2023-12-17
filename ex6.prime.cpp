#include<stdio.h>

int main() {
	
	int num,flag,first,second,i;
	
	printf("Enter your number to get expression of it as 2 prime numbers.");
	scanf("%d",&num);
	
	printf("Can be showed as numbers: ");
	for ( i=1 ; i <= num/2 ; i++ ) 
	{
		for ( flag=0 ; flag < 2 ; flag++ )
		{
			if ( num % i != 0 )
			{
				flag += 1;
				printf("%d , ",num % i);
			}
		}
	
	}
}
