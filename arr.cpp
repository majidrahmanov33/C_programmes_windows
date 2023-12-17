#include<stdio.h>

int main() {
	
	int arr[10];
	int sum=0;
	int i;
	printf("enter your fucking set of numbers to get the fucking array.");
	
	
	for ( i = 0 ; i < 10 ; i++) {
		scanf("%d",&arr[i]);
		
	}
	
	for ( i = 10 ; i < 10 ; i++ ) {
		sum += arr[i];
	}
	
	printf("Pox cavabin %d",sum);
	

	return 0;
}
