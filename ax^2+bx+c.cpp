#include<stdio.h>
#include<math.h>

int main() {
	
	float a,b,c,x1,x2,D;
	
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	printf("Enter value of c:");
	scanf("%f",&c);
	
	D = b*b - 4*a*c;
	x1= (-b + (sqrt(D)) )/2*a;
	x2= (-b - (sqrt(D)) )/2*a;
	
	printf("First root equals %.2f\n",x1);
	printf("Second root equals %.2f\n",x2);

	return 0;
	
}
