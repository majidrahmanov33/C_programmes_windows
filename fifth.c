#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {
	
	int n,i=1,l,ans;
	printf("Enter the number n and the limit l for creation of product table.\n");
	scanf("%d %d",&n,&l);
	
	while ( i <= l ) {
		
		ans=i*n;
		printf("%d * %d = %d\n",n,i,ans);
		i++;
		
	}
	
	
	
	getch ();
	return 0;
}
