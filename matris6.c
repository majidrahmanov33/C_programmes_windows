#include<stdio.h>

int main() {
	
	int matris[3][3];
	int i,j,sum;
	
	printf("Enter your numbers to get 3x3 matrice.\n");
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			scanf("%d",&matris[i][j]);
		}
	}
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		for ( j = 0 ; j < 3 ; j++ )
		{
			sum += matris[i][j];
		}
		printf("Senin %d'ci setirivin cemi %d\n",i+1,sum);
		sum = 0;
	}
	
	
	for ( j = 0 ; j < 3 ; j++ )
	{
		for ( i = 0 ; i < 3 ; i++ )
		{
			sum += matris[i][j];
		}
		printf("Senin %d'ci sutunuvun cemi ise %d\n",j+1,sum);
		sum = 0;
	}
	
	return 0;
}
