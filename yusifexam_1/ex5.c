#include<stdio.h>

int fact(int x);

int main() {

int n;

printf("Enter number n to get its factorial n!\n");
scanf("%d",&n);

printf("%d\n",fact(n));

return 0;
} //end of main() 


int fact(int x) {
int ans;
if ( x == 1) return 1;
ans = x * fact(x-1);
return ans;
} //end of fact() 
