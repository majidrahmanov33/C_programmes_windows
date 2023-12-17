#include<stdio.h>
#include<conio.h>
#include<math.h>

	int main () {
		
		int n;
		int sum=0;
		
		printf("Enter n for total sum of numbers 1 to n.\n");
		scanf("%d",&n);
		while ( n > 0 ) {
			sum=sum+n;
			n=n-1;
		}
		printf("Total sum equals to %d",sum);
		
	getch ();
	return 0;
	}
	
