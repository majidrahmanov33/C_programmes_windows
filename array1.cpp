#include<stdio.h>
#include<conio.h>

int main() {
	
	int ededler[20],sum=0;
	float avg;
	printf("Pox ededlerivi dog.\n");
	
	for (int i=0 ; i < 20 ; i++)
	{

		scanf("%d",&ededler[i]);
		sum += ededler[i];
	}
	
	avg = sum / 20;
	
	printf("Fokin average is %.2f",avg);
	
	
	
	
	
	getch ();
	return 0;
}
