#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {
	
	int a,b,c;
	
	printf("Enter digits to get the largest:");
	scanf("%d %d %d",&a,&b,&c);
	
	if ( a > b ) {
		
		if ( a > c ) {
			printf("%d is the largest.",a);
		}
	}
	
	else if ( b > c ) {
		 
		 if ( b > a ){
		 	printf("%d is the largest.\n",b);
		 }
	}
	
	else {
		printf("%d is the largest",c);
		
	
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		getch ();
		return 0;
	}
