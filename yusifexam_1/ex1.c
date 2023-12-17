#include<stdio.h>

int checkprime(int x);

int main() {

int n;
printf("Enter your number to check if it's prime or not\n");
scanf("%d",&n);
printf("%d",checkprime(n));
 
return 0;
}

int checkprime(int x) {
int flag=0,rem;
for ( int i = 2 ; i <= x/2 ; i++ ){
	rem = x % i;
	if ( rem == 0 ) flag++;
} //endfor
if ( flag >= 1 ) return 1;
else return 0;
} //end of checkprime() function.
