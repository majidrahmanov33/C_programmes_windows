#include<stdio.h>

int funky(int num) {
	
	int sum=0,lrg=0;

	while ( num > 0 ) {
		if ( num % 10 > lrg )
		{
			lrg = num % 10;
		}

		sum += num % 10;
		num /= 10;

	}

	printf("The sum is %d\n",sum);
	printf("The Largest number is %d\n",lrg);

}

int main() {
	
	int num;

	printf("Enter your long digited number.\n");
	scanf("%d",&num);
	funky(num);

	return 0;
}