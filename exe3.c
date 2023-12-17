#include<stdio.h>

int findsmall(int x,int y) {
	
	if ( x < y ) {
		return x;
	}

	else {
		return y;
	}
}
	int findlarge(int x,int y) {
	
	if ( x > y ) {
		return x;
	}

	else {
		return y;
	}
}
	int main() {

		int x,y;

		printf("Enter your 2 numbers x and y: ");
		scanf("%d\t%d",&x,&y);

		printf("The larger number is %d\n",findlarge(x,y));
		printf("The smaller number is %d\n",findsmall(x,y));

		return 0;

	}




