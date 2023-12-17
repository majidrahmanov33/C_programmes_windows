#include<stdio.h>
#include<conio.h>

int main () {
	
	float sec;
	float min;
	float hrs;
	float day;
	printf("This programme will convert your seconds and prints in the format of days;hours and minutes\n");
	printf("Enter your seconds");
	scanf("%f",&sec);
	min=sec/60;
	hrs=sec/3600;
	day=sec/86400;
	printf("Your answer is %.3f minutes %.3f hours %.3f days",min,hrs,day);
	
	getch();
	return 0;
		
}
