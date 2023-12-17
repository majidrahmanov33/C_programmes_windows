#include<stdio.h>

int mtp(int num) {
	
	int i,ans;

	for ( i = 1 ; i <= 10 ; i++ ) 
	{
		ans = num * i;
		printf("%d * %d = %d\n",num,i,ans);
	}
}

int main() {
	
	int num;

	printf("Enter your num to get its multiplication table from 1 to 10.\n");
	scanf("%d",&num);
	mtp(num);

	return 0;
}