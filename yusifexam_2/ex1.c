#include<stdio.h>

int main(void)  {

int lim;

printf("Enter the edge of series.Limit is 1-20.\n");
if ( lim > 20 ) {
scanf("%d",&lim);
}

int fibo[lim];
fibo[0] = 1;
fibo[1] = 1;
printf("%d , %d , ",fibo[0],fibo[1]);

for ( int i = 2 ; i < lim ; i++ ) {
fibo [i] = fibo[i-1] + fibo[i-2];
printf("%d , ",fibo[i]);
}


return 0; } //end of main

