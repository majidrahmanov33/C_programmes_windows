#include<stdio.h>
#include<conio.h>


int main() {
	
	int n;
	int c;
	float avg=0;
	int sum=0;
	printf("Enter n numbers to get their average\n");

	for ( c = 0 ; true ; c++ ) {
		
		scanf("%d",&n);
		
		if ( n == -1 ) {
			break;
		}
		
		sum += n;
	
	}
	
	avg = sum/c;
	printf("Average of n numbers is %f",avg);
	
	
	getch();
	return 0;
}
