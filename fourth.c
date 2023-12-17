#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {
	
	int n,i=1,ans;
	printf("Enter the number n to get its product table from 1 to 10.\n");
	scanf("%d",&n);
	
	while ( i <= 10 ) {
		
		ans=i*n;
		printf("%d * %d = %d\n",n,i,ans);
		i++;
		
	}
	
	
	
	getch ();
	return 0;
}
