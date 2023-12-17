#include<stdio.h>
 
int main() {
    int i, space, rows, star=0;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
     
    /* printing one row in every iteration */
    for(i = 1; i <= rows; i++) {
        /* Printing spaces */
        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }
        /* Printing stars */
        while(star != (2*i - 1)) {
            printf("*");
            star++;;
        }
        star=0;
        /* move to next row */
        printf("\n");
    }
 
    return 0;
}
