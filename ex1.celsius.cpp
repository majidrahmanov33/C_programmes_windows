#include<stdio.h>

int main() {
	
	int c;
	
	printf("Enter the current centigrade in Celsius: ");
	scanf("%d",&c);
	
	if ( c < 0 ) 
	{
		printf("Freezing Weather!");
	}
	
	else if ( 0 <= c && c <= 10 )
	{
		printf("Very Cold Weather");
	}
	
	else if ( 10 <= c && c <= 20 )
	{
		printf("Cold Weather!");
	}
	
	else if ( 20 <= c && c<= 30 )
	{
		printf("It's normal temperature");
	}
	
	else if ( 30 <= c && c <= 40  )
	{
		printf("It's Hot");
	}
	
	else if ( c > 40 )
	{
		printf("Its too hot! HEELP");
	}
	
	return 0;
}
