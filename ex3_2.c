#include<stdio.h>

float findsmall(float x,float y) {
	
	if ( x < y ) {
		return x;
	}

	else {
		return y;
	}
}
	float findlarge(float x,float y) {
	if ( x > y ) {
		return x;
	}

	else {
		return y;
	}
}
	int main() {

		float x,y;

		printf("Enter your 2 numbers x and y: ");
		scanf("%f %f",&x,&y);

		printf("The larger number is %.3f\n",findlarge(x,y));
		printf("The smaller number is %.3f\n",findsmall(x,y));

		return 0;

	}




