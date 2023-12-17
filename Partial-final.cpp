#include<stdio.h>
#include<math.h>
#include<conio.h>

	int main () {
		
		float m1;
		float m2;
		float f;
		printf("Enter your midterm 1 grade:");
		scanf("%f",&m1);
		printf("Enter your midterm 2 grade:");
		scanf("%f",&m2);
		f=25-(0.75*m1+0.75*m2);
		printf("You have to collect %.2f minimally in Final exam to pass the average",f);
		getch ();
		return 0;
	}
