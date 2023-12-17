/*
Geometry in the Plan
Write a program that calculate and show the distance DIST (type double) between 2 points A and B in a plan.
use (XA,YA) and (XB,YB) in integer for the coordinate of A and B.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
	
	float xa,ya,xb,yb;
	float DIST;
	printf("Enter initial coordinates:");
	scanf("%d %d",&xa,&ya);
	printf("Enter last coordinates:");
	scanf("%f %f",&xb,&yb);
	
	DIST = sqrt(sqrt(xb*xb-xa*xa) + sqrt(yb*yb-ya*ya));
	a
	printf("The distance between your coordinates is %.2f",DIST);
	
	
	
	
	
	
	getch ();
	return 0;
}
