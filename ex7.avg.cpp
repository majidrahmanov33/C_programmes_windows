#include<stdio.h>

int main() {
	
	int i;
	float grades,avg=0.0,s=0.0,l=0.0;
	
	for ( i = 0 ; i < 20 ; i++ )
	{
		printf("Enter the grade: ");
		scanf("%f",&grades);
		avg += grades;
		if ( grades > l )
		{
			l = grades;
		}
		
		if ( grades < s )
		{
			s = grades;
		}
		
	}
	
	avg /= 20;
	
	printf("Average of Class is %.3f",avg);
	printf("\n\n Smallest point among the class was %.3f",s);
	printf("\n Largest point among the class was %.3f",l);

	
	return 0;
}
