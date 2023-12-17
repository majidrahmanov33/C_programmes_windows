#include<stdio.h>
#include<math.h>
#define PI 3.14159265359

int main() {
	
	float x,rad,deg,ans,val;
	printf("Enter your x to get sin(1/x):\n");
	scanf("%f",&x);
	
	rad = 1.0/x;
	deg = ( rad * PI) / 180.0;
	ans = sin(deg);
	
	printf("Answer is %.4f",ans);

	return 0;
}
