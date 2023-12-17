#include<stdio.h>

int main() {
	
	int i, toplam=0;
 	for( i = 1 ; i <= 59 ; i += 2 )
 	{
 	toplam += i*(i+1);
	}
	
	printf("Toplam = %d",toplam);
	
	return 0;
}
