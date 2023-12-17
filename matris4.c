#include<stdio.h>

int main() {
	
	int i,j;
	
	int matris[3][2];
	
	printf("Enter number to get the matrice in the form of 2x3.\n");
	
	for ( i = 0 ; i < 2 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	
	for ( i = 0 ; i < 2 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
