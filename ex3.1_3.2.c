#include<stdio.h>

int main(void) {

int n;

printf("Choose any code\n\n");
printf("mammal\t\tcode1\ncrocodile\tcode2\nhuman\t\tcode3\nbird\t\tcode4\nfish\t\tcode5\n");
scanf("%d",&n);

switch (n) {
case 1:
printf("You chose Mammal (code 1)\n");
break;

case 2:
printf("You chose Crocodile (code 2)\n");
break;

case 3:
printf("You chose Human (code 3)\n");
break;

case 4:
printf("You chose Bird (code 4)\n");
break;

case 5:
printf("You chose Fish (code 5)\n");
break;

default:
printf("ERROR\nYou must enter between 1-5!\n");
break;

}

return 0;
}
