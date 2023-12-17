#include<stdio.h>
#include<conio.h>
#include<string.h>


int main () {
	
	char U=both;
	char C=Celsius;
	char F=Fahrenheit;
	float deg;
	printf("Hello, This programme will introduce you conversion of Celsius to Fahenheit or otherwise in 2 options\n");
	printf("Now enter your option, Celsius or Fahrenheit? ");
	scanf("%c",&both);
	if ( U = C ) {
		printf("Enter value of degrees in Celsius");
		scanf("%f",&deg);
		deg=(deg-32)*1.8;
		printf("%f Celsius",deg);
	}
	else if ( U = F ) {
		printf("Enter the value of degrees in Fahrenheit");
		scanf("%f",&deg);
		deg=((5/9)*deg)+32;
		printf("%f Fahrenheit",deg);
	}
	
	getch ();
	return 0;
	
}
	
	
	
