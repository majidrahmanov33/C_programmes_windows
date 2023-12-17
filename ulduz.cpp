#include<stdio.h>

int main() {
		
		int i,j,e,a,S,P;
		
		printf("Eni sonra uzunlugu gir dalbayob.\n");
		scanf("%d &d",&e,&a);
		
		for (i = 0; i < e ; i++ ) {
			for (j = 0 ; j < a ; j++ ) {
				printf("*");
				
			}
			printf("\n");
			
		}	
		S=e*a;
		P=2*(e+a);
		
		printf("Sahevi sox gozuve: %d ",S);
		printf("Perimetri sox gotuve %d",P);
		
	return 0;
	
}

