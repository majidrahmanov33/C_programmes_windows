#include<stdio.h>

int main(void) {

int arr[20],n;
arr[0] = 1;
arr[1] = 1;

printf("%d , %d , ",arr[0],arr[1]);

for ( int i = 2 ; i < 20 ; i++) {
arr[i] = arr[i-1] + arr[i-2];
printf("%d , ",arr[i]);
} //endfor

printf("\nNow enter number n to get nth term of fibonacci series.\nLimit is 1-20.\n");
scanf("%d",&n);
if ( n >= 1 || n <= 20 ) printf("%d\n",arr[n]);
return 0;
}
