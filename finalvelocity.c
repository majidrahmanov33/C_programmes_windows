#include<stdio.h>
#include<conio.h>
#include<math.h>
#define GI 9.8
int main() {
	
	int h;
	float v;n
	
	printf("Enter the height of the matter that's gonna fall");
	scanf("%d",&h);
	
	v = sqrt((2.0 * GI * h));
		
	printf("The final velocity just before the matter hits the ground is %f",v);
	
	getch ();
	return 0;
}
