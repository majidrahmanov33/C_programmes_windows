#include<stdio.h>
#include<conio.h>

int main() {
	
	float eu;
	float azn;
	
	printf("Enter your value in euros:");
	scanf("%f",&eu);
	
	// 1 euro = 1.9445 AZN
	
	azn = eu * 1.9445;
	
	printf("Your value in manats is %.2f",azn);
	
		
	getch ();
	return 0;
}
