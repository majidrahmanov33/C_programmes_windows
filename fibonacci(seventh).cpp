#include<stdio.h>

int main() {
int ilk,ikinci,i,n;
printf("Enter your limit for fibonacci series.\n");
	scanf("%d",&n);
	
	printf("%d\n",ilk);
	printf("%d\n",ikinci);
	for( i = 0 ; i <= n ; i++) {
		int temp=ikinci;
		ikinci += ilk;
		ilk=temp;
		printf("%d\n",ikinci);
	}

	return 0;
}
