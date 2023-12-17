#include<stdio.h>

int main() {
	
	int i,j;
	int matris[3][3];
	
	printf("Enter your number to make 3x3 matris.\n");
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ ) 
		{
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}

	for ( i = 0 ; i < 3 ; i++ ) {
		for ( j = 0 ; j < 3 ; j++ )
		{
			printf("%d ",matris[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
	
}
