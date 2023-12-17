#include<stdio.h>

int str(char x);

int main() {

char c[50];

printf("Enter your name(or characters) and we define the length.\n");
scanf("%s",c);

printf("%d",str(c,50));


return 0;

} //end main

int str(char c[],int size) {
for ( int i = 0 ; c[i] != '\0' ; i++ ) {
} //endfor

printf("The length of your string is %d\n",i);
} //end str()

