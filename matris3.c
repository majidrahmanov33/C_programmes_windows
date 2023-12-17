#include<stdio.h>

int main() {
	
	int i,j;
	
	int matris[3][2];
	
	printf("Enter number to get the matrice in the form of 3x2.\n");
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 2 ; j++ )
		{
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 2 ; j++ )
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
