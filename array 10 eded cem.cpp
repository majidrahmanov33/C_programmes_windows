#include<stdio.h>
#include<conio.h>

int main() {
	
	float ededler[10];
	float sum;
	
	for ( int i=0 ; i < 10 ; i++  )
	{
		printf("%d-ci deyerinizi girin.",i+1);
		scanf("%f",&ededler[i]);
		sum += ededler[i];
		
	}
	
	printf("Ededlerinizin cemi %.2f'dir ",sum);
	
	getch();
	return 0;
}
