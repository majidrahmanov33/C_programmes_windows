#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	
	int n;
	float kesr,sum=0.0;
	printf("Enter number n to get the sum of harmonic series  1+1/2+1/3+...+1/n\n");
	scanf("%d",&n);
	
	while ( n > 0 ) {
		
		kesr = 1.0 / n;
		sum += kesr;
		n--;	
	}
	
	printf("The sum of harmonic series equals to %f",sum);
	
	getch ();
	return 0;
}
