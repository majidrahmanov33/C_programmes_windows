#include<stdio.h>
/*
This programme obtains a x value and starts a loop for x to continue 
till 10 and when it reaches to 5 the loop breaks itself and prints 
on the screen "The loop is broke out at the value of 5 of x".
*/
int main() {
	
	int x;
	
	for ( x = 1 ; x <= 10 ; x++ )
	{
		if ( x == 5 )
		{
			break;
		}
		
		printf("%d",x);
	}
	
	printf("\n Broke out of loop at x == %d\n",x);
	return 0;
}
