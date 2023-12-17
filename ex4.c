#include<stdio.h>

int getcube(int a) {
	int ans=1;
	int c=0;
	while ( c < 3 )
	{
		ans *= a;
		c++;
	}

	return ans;

	}

	int main() {
		int num;
		printf("Enter your number to get its cube: ");
		scanf("%d",&num);
		printf(" %d \n",getcube(num));

		return 0;

	}
