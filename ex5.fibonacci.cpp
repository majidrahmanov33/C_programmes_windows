#include<stdio.h>

int main() {
	
	int series[50];
	int i;
	
	series[0]=1;
	series[1]=1;

	printf("Fibonacci series: 1,");
	for ( i = 1 ; i < 50 ; i++ )
	{
		series[i] = series[i-1] + series [i-2];
		printf("%d,",series[i]);
	}
	
	return 0;
}
