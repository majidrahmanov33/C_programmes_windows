#include<stdio.h>

int main() {
	
	int i,j,series;
	
	series=1;
	
	for ( i = 0 ; i < 15 ; i++ )
	{
		series *= series+1;
		for ( j = 0 ; j < 1 ; j++ )
		{
			series += series+1;
		}
	}
	
	printf("First 30 terms of these series is %d",series);
	
	return 0;
}
