#include<stdio.h>
#include<conio.h>

int main() {
	float a;
	float b;
	float r;
	float R;
	printf("Bu proqram verdiyiniz beraberterefli ucbucagin sahesini hesablayacaq.\n");
	printf("Ucbucagin terefini daxil edin: ");
	scanf("%f",&a);
	b=(a*a*1.7)/4;
	r=(a*1.7)/6;
	R=(a*1.7)/3;
	printf("Sizin ucbucagin sahesi beraberdir %f\n",b);
	printf("Sizin ucbucagin daxiline cekilmish cevrenin radiusu %f beraberdir\n",r);
	printf("Sizin ucbucagin xaricine cekilmish cevrenin radiusu %f beraberdir\n",R);
	
	
	getch();
	return 0;
	
	
}
