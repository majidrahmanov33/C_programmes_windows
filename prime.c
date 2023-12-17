#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	
	int n;
	int b;
	int c;
	int flag = 0;
	printf("Enter your value :\n");
	scanf("%d",&n);
	for( b = 2 ; b <= n/2 ; b++) {
		c = n % b;
		if ( c == 0 ) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("Number is prime");
	}
	else {
		printf("Number is not prime");
	}
	
	
	
	getch ();
	return 0;
}
