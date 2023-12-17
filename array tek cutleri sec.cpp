#include<stdio.h>
int main() {
	int eded[5],i;
	
	for( i = 0 ;  i < 5 ; i++){
		scanf("%d",&eded[i]);
		
	}
	printf("cut ededler ");
	for( i = 0 ; i < 5 ; i++){
			if( eded[i] % 2 == 0 ){
			
			printf("%d  , ",eded[i]);
		}
	}
	printf("\n tek ededler  ");
	for( i = 0 ; i < 5 ; i++ ){
		if(eded[i] % 2 != 0){
			printf("%d   , ",eded[i]);
		}
	}
	return 0;
}
