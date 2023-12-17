#include<stdio.h>


int max(int arr[],int size);
int min(int arr[],int size);

int main() {

int arr[10];
printf("Enter the numbers to create an array: ");
for ( int i = 0 ; i < 10 ; i++ ) 
{
	scanf("%d",&arr[i]);
} //endfor

printf("The largest is %d\n",max(arr,10));
printf("The least is %d\n",min(arr,10));


return 0; } //endmain

int max(int arr[],int size) {
int larg=arr[0];
for ( int i = 1 ; i < size ; i++ ) 
{
	if ( larg < arr[i] ) larg = arr[i];
} //endfor
return larg;
} //end of max()




int min(int arr[],int size) {
int least=arr[0];
for ( int i = 1 ; i < size ; i++ ) 
{
	if ( least > arr[i] ) least=arr[i];
} //endfor
return least;
} //end of max()



	
