#include<stdio.h>
#include<math.h>
#define PI 3.14159265

int main() {
	
	int x,y,a,b,c,d,dp,cos;
	float ans,arcsin,cevirici,cp;
	
	printf("Enter x and y of (x;y) vector: ");
	scanf("%d %d",&x,&y);
	printf("Enter x and y of (a;b) vector: ");
	scanf("%d %d",&a,&b);
	
	c = x * a;
	d = y * b;
	dp = c + d;
	
	printf("Dot product of %d;%d and %d;%d equals to %d\n\n",x,y,a,b,dp);
	
	cos = dp / (sqrt((a*a)+(b*b))*sqrt((x*x)+(y*y)));
    cevirici = 180.0 / PI;
   	ans = acos(cos) * cevirici;
	
	printf("\nThe angle between your vectors is %.3f degrees.",ans);
	
	cp = sqrt((a*a)+(b*b))*sqrt((x*x)+(y*y)) * sin(acos(cos));
	
	printf("AAAAND FINALLY..\n\n\nYour CROSS PRODUCT ISS>>>>\n\n\n\n\n %.3f",cp);
		
	return 0;	
}
