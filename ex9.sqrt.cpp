#include<stdio.h>

int main() {
	
	int rem,num,i;
	
	printf("Enter your number: ");
	scanf("%d",&num);
	
	for ( i=1 ; i < num/2 ; i++ )
	{
		rem = num % i;
		if ( rem == 0 )
		{
			if ( (i*i) == num )
			{
				printf("Square root of %d equals to %d",num,i);
			}
		}	
	}
	
	return 0;
	
}
