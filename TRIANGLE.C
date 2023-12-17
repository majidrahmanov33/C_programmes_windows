#include<stdio.h>
int main(){
	
// Equiliterial    Scalane Isoscale
int X;
int Y;
int Z;
printf("Enter the values:\n");
scanf("%d",&X);
scanf("%d",&Y);
scanf("%d",&Z);
// First check is it valid or not 
if ( X<Y+Z && Y<X+Z && Z<X+Y){
	if (X==Y && Y==Z && X==Z){
		printf("Equilaterial");
	}
	else if ( X == Y != Z || X == Z != Y || Y == Z != X ) {
			printf("ISOSCALE");
		}
	else  {
			printf("Scalane");
		}
	
}
else {
	printf("Not valid Triangle ");
}
return 0;
}
