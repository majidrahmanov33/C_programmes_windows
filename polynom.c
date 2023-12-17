#include<stdio.h>
#include<math.h>
#include<conio.h>

	int main () {
		
		int sum=0;
		int ans=1;
		int n;
		int m;
		int cn=0;
		
		printf("Enter the value n for polynomic equation");
		scanf("%d",&n);
		printf("Enter the power of polynomic equation");
		scanf("%d",&m);
		
		while ( n > 0 ) {
			
			cn=n;
			
			while ( m > 0 ) {
				ans=cn*cn;
				m=m-1;
			}
			
			n=n-1;
			sum=sum+ans;
		}
		
		printf("Your answer of 1+2^m+...+n^m is %d",sum);
		
		
		getch ();
		return 0;
	}
