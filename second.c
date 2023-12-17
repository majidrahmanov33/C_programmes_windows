#include<stdio.h>
#include<conio.h>

int main() {
	
	int x,n,ans=1;
	printf("Enter x and n to get the x to power n:");
	scanf("%d %d",&x,&n);
	
	if ( n == 0 ) {
		printf("Your answer is %d",ans);
	}
	while ( n > 0 ) {
		
		ans=ans*x;
		n--;
	}
	
		printf("Your answer is %d",ans);
	 
	
	getch ();
	return 0;
}
