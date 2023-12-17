#include<stdio.h>
#include<conio.h>

int main() {
	
	int i=1,n,sum;
	
	while ( i > 0 ) {
		
		printf("Enter your number\n");
		scanf("%d",&n);
		sum += n;
		
		if ( n == -1 ) {
			break;
		}
		
	}
	
	printf("Your answer is %d",sum);
	
	
	
	
	
	
	
	
	
	
	
	
	getch ();
	return 0;
}
