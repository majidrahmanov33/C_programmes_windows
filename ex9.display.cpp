#include<stdio.h>
/*
Yusif qardash.Proqram x ve y deyerleri isdiyir sennen
x deyeri bir setirde nece dene 0 qoymasi ucundu y deyeri de
nece dene setir yazmasi ucun du.Ing ce de yaza bilerem 
ama ozun bidinde
*/

int main() {
	
	int x,y,i,j;
	
	printf("Enter 2 integers in the range 1-20: ");
	scanf("%d %d",&x,&y);
	
	for ( i=1 ; i <= y ; i++ )
	{
		for ( j=1 ; j <= x ; j++ )
		{
			printf("0");
		}
		printf("\n");
	}
	
	return 0;
}
