#include<stdio.h>
#include<conio.h>

int main() {
	
	int i,n,fac=1;
	printf("Enter n to get its factorial:");
	scanf("%d",&n);
	
	for ( i = 1 ; i <= n ; i++ ) {
		fac=fac*i;
		
    }
	
	printf("Factorial of %d! = %d",n,fac);
	
	getch ();
	return 0;
}
