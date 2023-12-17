#include<stdio.h>

int main() {
	int num;
	int ededs[] = {25,22,17,19,47,3,98,5,124,10};
	
	printf("Ededi daxil edin.");
	scanf("%d",&num);
	printf("Ededinizin boleni ededs arrayinin icindekilerden bunlardir:");
	for ( int i = 0 ; i < 10 ; i++) 
	{
		if ( num % ededs[i] == 0 ) {
			printf("%d,",ededs[i]);
		}
	}
	return 0;
}
