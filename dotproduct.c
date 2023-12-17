#include<stdio.h>
#include<math.h>

int main() {
	
	int x,y,a,b,c,d,dp;
	
	printf("Enter x and y of (x;y) vector: ");
	scanf("%d %d",&x,&y);
	printf("Enter x and y of (a;b) vector: ");
	scanf("%d %d",&a,&b);
	
	c = x * a;
	d = y * b;
	dp = c + d;
	
	printf("Dot product of %d;%d and %d;%d equals to %d\n\n",x,y,a,b,dp);
	
	if ( dp / sqrt((a*a)+(b*b))*sqrt((x*x)+(y*y)) == 0 )
	{
		printf("And these vectors are perpendicular :) ");
	}
	
	else if ( dp / sqrt((a*a)+(b*b))*sqrt((x*x)+(y*y)) == 1 )
	{
		printf("And these vectors are parallel :)");
	}
	
	else {
		printf("The angle between your vectors are different from 90 or 0 degrees.\n");
	}
 	return 0;
}
