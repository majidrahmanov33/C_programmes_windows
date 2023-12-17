#include<stdio.h>

int main() {
	
	int i,j,sum;
	
	int matris[3][3];
	
	printf("Enter your number to get the matrice in the form of 3x3.\n");
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++)
		{
			scanf("%d",&matris[i][j]);
		}
		
		printf("\n");
	}
	
	printf("Your matrice has been created\nThis is your matrice:\n");
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++)
		{
			printf("%d ",matris[i][j]);
		}
		
		printf("\n");
	}
	
	printf("Now we are calculating the each sutun...\n");
	
	for ( j = 0 ; j < 3 ; j++ )
	{
		for ( i = 0 ; i < 3 ; i++ )
		{
			sum += matris[i][j];
		}
		printf("%d ",sum);
		sum = 0;
	}
	
	return 0;
}
