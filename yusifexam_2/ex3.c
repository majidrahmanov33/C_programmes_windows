#include<stdio.h>
#include<math.h>

void checkarm(int x);
void perfect(int x);

int main(void) {

int x;

printf("Enter your number to get if it's an Armstrong number, or a perfect number.\n");
scanf("%d",&x);

checkarm(x);
perfect(x);

return 0; } //end of main

void perfect(int x) {
int i,rem,sum=0;
for ( i = 1 ; i <= x ; i++ ) {
if ( x % i == 0 ) {
sum += i;
} //endif
} //endfor

if ( sum == x ) printf("Yes, it's a perfect number.\n");
else printf("Not PERFECT\n");

} // end of function

void checkarm(int x) {
int copyx=x,rem,rempow,sum=0;
for ( ; x > 0 ; x /= 10 ) {
rem = x % 10;
rempow = pow(rem,3);
sum += rempow;
} //end for

if ( sum == copyx ) printf("Yes, it's an Armstrong number.\n");
else printf("NOT AN ARMSTRONG NUMBER.\n");
} //end of function









