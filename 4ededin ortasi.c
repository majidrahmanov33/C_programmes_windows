#include<stdio.h>
#include<conio.h>
int main() {
	printf("Bu proqram verdiyiniz 4 ededin ededi ortasini hesablayacaq\n ");
	float a;
	float b;
	float c;
	float d;
	float e;
	printf("Ilk ededi teyin edin ");
	scanf("%f",&a);
	printf("2-ci ededi teyin edin ");
	scanf("%f",&b);
	printf("3-cu ededi teyin edin ");
	scanf("%f",&c);
	printf("Son ededi teyin edin ");
	scanf("%f",&d);
	e=(a+b+c+d)/4;
	printf("Sizin ededi ortaniz beraberdir %f",e);
	
	
	
	
	
	getch();
	return 0;
}
