#include<stdio.h>
#include<conio.h>
 
int main() {
 float celsius, fahrenheit;
 
 printf("\nEnter temp in Celsius : ");
 scanf("%f", &celsius);
 
 fahrenheit = (1.8 * celsius) + 32;
 printf("\nTemperature in Fahrenheit : %.1f ",fahrenheit);

 getch();
 return (0);
}
