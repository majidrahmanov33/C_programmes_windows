#include<stdio.h>

int binconv(int x) {
int ans,rem=1
for ( ; x != 0 ; x /= 10 ) {
if ( x % 2 == 1 ) {
rem *= 10;
rem++
} //endif
else { 
rem *= 10;
} //endelse 
} //endfor

return ans;
} //end of main

int main(void) {

int reqem;

printf("Poxuvu daxil ele: ");
scanf("%d",&reqem);
printf("%d",binconv(reqem));


return 0; } //end of main
