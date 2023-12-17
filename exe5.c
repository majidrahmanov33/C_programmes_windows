#include<stdio.h>

int testprim(int num) {
	
	int flag=0,i;

	for ( i = 2 ; i <= num/2 ; i++ )
	{
		if ( num % i == 0 ) {
			flag = 1;
			break;
		}
	}

	if ( flag == 0 )
	{
		printf("It's Prime Number Man\n");
	}
	else {
		printf("It's Not Prime Maaan\n");
	}
}

int main() {
	
	int num;

	printf("Enter the num,pls.\n");
	scanf("%d",&num);
	testprim(num);

	return 0;
}
