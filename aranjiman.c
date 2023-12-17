#include<stdio.h>
	
	int arg(int n,int k) {
		int ferq,ans=1,ans2=1,ans3,i;
		for ( i = 0 ; i < n ; i++ ) {
			ans *= i;
		}
		ferq = n - k;
		for ( i = 0 ; i < ferq ; i++ ){
			ans2 *= ferq;
		}
		
		ans3 = ans / ans2;
		return ans3;
	}
	
	int main () {
		
		int a,b,ans;
		printf("Aranjiman hesablamasi ucun deyeri ve esasi daxil edin.\n");
		printf("Esas: ");
		scanf("%d",&a);
		printf("Deyer: ");
		scanf("%d",&b);
		printf("Aranjimaninizin cavabi beraberdir %d",arg(n,k));
		return 0;
	}
